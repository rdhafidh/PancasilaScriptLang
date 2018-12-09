#include "whileloop.h"
#include <env.h>
#include <func.h>
#include <objlist.h>
#include <iostream>
namespace sym {
WhileLoop::WhileLoop(std::shared_ptr<WhileLoopObject> ev) : parentObj(ev) {
  objs = std::make_shared<ObjList>();
}

WhileLoop::~WhileLoop() {}

bool WhileLoop::addVar(const std::pair<std::string, val::ValueAbs> &var) {
  if (parentObj && parentObj->getEnv() &&
      !parentObj->existFromVarNameWithWhileLoopFiltered(this, var.first)) {
    (*objs) << var;
    return true;
  }
  return false;
}

std::pair<bool, val::ValueAbs> WhileLoop::findVar(const std::string &name) {
  return objs->findVar(name);
}

bool WhileLoop::setVar(const std::string &name, const val::ValueAbs &var) {
  return objs->setVar(name, var);
}

void WhileLoop::dumpVar() { objs->dump(); }

bool WhileLoop::existFromVarName(const std::string &name) const {
  return objs->exists(name);
}

size_t WhileLoop::varSize() const {
  if (parentObj && parentObj->getEnv()) return objs->getList()->size();

  return 0;
}

WhileLoopObject::WhileLoopObject(std::shared_ptr<Env> ev) : env(ev) {}

WhileLoopObject::~WhileLoopObject() { mLoops.clear(); }

size_t WhileLoopObject::size() const { return mLoops.size(); }

void WhileLoopObject::setParentFunction(std::shared_ptr<Func> fnc) {
  mFunc = fnc;
}

std::shared_ptr<Func> WhileLoopObject::parentFunction() {
  if (auto mf_lck = mFunc.lock()) {
    return mf_lck;
  }
  return nullptr;
}

std::shared_ptr<WhileLoop> WhileLoopObject::at(size_t n) {
  if (n < (size_t)0 || n >= mLoops.size()) {
    return nullptr;
  }
  if (auto s_wk = mLoops[n].lock()) {
    return s_wk;
  }
  return nullptr;
}

WhileLoopObject &WhileLoopObject::operator<<(std::shared_ptr<WhileLoop> loop) {
  if (loop && !env.expired()) {
    mLoops.emplace_back(loop);
  }
  return *this;
}

std::pair<bool, val::ValueAbs> WhileLoopObject::findVar(
    const std::string &fromVarName) const {
  if (auto env_lck = env.lock()) {
    auto ret = env_lck->objects()->findVar(fromVarName);
    if (ret.first) {
      return ret;
    }
  }

  if (auto mf_lck = mFunc.lock()) {
    auto ret = mf_lck->findVar(fromVarName);
    if (ret.first) {
      return ret;
    }
  }

  for (auto loop : mLoops) {
    if (auto cl_lk = loop.lock()) {
      auto ret = cl_lk->findVar(fromVarName);
      if (ret.first) {
        return ret;
      }
    }
  }
  return std::make_pair(false, val::ValueAbs());
}

bool WhileLoopObject::setVar(const std::string &fromVarName,
                             const val::ValueAbs &value) {
  if (auto env_lck = env.lock()) {
    if (env_lck->objects()->setVar(fromVarName, value)) {
      return true;
    }
  }
  if (auto mf_lck = mFunc.lock()) {
    if (mf_lck->setVar(fromVarName, value)) {
      return true;
    }
  }
  for (auto loop : mLoops) {
    if (auto cl_lk = loop.lock()) {
      return cl_lk->setVar(fromVarName, value);
    }
  }
  return false;
}

std::shared_ptr<Env> WhileLoopObject::getEnv() {
  if (auto env_lck = env.lock()) {
    return env_lck;
  }
  return nullptr;
}

std::pair<bool, size_t> WhileLoopObject::existFromVarName(
    const std::string &name) const {
  bool found = false;
  size_t idx = 0;
  for (auto loop : mLoops) {
    if (auto cl_lk = loop.lock()) {
      found = cl_lk->existFromVarName(name);
      if (found) {
        return std::make_pair(found, idx);
      }
    }
    idx++;
  }
  return std::make_pair(found, idx);
}

bool WhileLoopObject::existFromVarNameWithWhileLoopFiltered(
    WhileLoop *excluded, const std::string &varname) const {
  bool found = false;
  for (auto loop : mLoops) {
    if (auto dl_loop = loop.lock()) {
      if (dl_loop.get() != excluded && dl_loop->existFromVarName(varname)) {
        found = true;
        break;
      }
    }
  }
  return found;
}

WhileLoopObjectList::WhileLoopObjectList() {}

WhileLoopObjectList::~WhileLoopObjectList() { clearAllLoops(); }

WhileLoopObjectList &WhileLoopObjectList::operator<<(
    std::shared_ptr<WhileLoopObject> newLoop) {
  if (newLoop && newLoop->getEnv()) {
    loops.push_back(newLoop);
  }
  return *this;
}

size_t WhileLoopObjectList::size() const { return loops.size(); }

std::shared_ptr<WhileLoopObject> WhileLoopObjectList::at(size_t index) {
  if (index < 0 || index >= loops.size()) return nullptr;

  return loops[index];
}

bool WhileLoopObjectList::exists(std::shared_ptr<WhileLoopObject> loop) {
  for (size_t x = 0; x < loops.size(); x += 1) {
    if (loops[x] == loop) return true;
  }
  return false;
}

bool WhileLoopObjectList::deleteLoopAt(size_t index) {
  if (index < 0 || index >= loops.size()) return false;

  loops[index] = nullptr;
  loops.erase(loops.begin() + index);
  return true;
}

void WhileLoopObjectList::clearAllLoops() { loops.clear(); }

void WhileLoopObjectList::clearFirst() {
  if (loops.size() > 0) {
    loops[0] = nullptr;
    loops.erase(loops.begin());
  }
}

void WhileLoopObjectList::clearLast() {
  if (loops.size() > 0) {
    loops[loops.size() - 1] = nullptr;
    loops.erase(loops.begin() + (loops.size() - 1));
  }
}

std::vector<size_t>
WhileLoopObjectList::findDuplicateVarNameByNestedIndexIncluded(
    const std::string &varname) const {
  std::vector<size_t> index;
  int idx = 0;
  for (auto mloops : loops) {
    auto ret = mloops->existFromVarName(varname);
    if (ret.first) index.push_back(ret.second);
    idx++;
  }
  return index;
}

bool WhileLoopObjectList::setVar(const std::string &name, size_t index,
                                 size_t nest_level,
                                 const val::ValueAbs &value) {
  if (index < 0 || index >= loops.size()) return false;

  if (loops[index] && loops[index]->at(nest_level))
    return loops[index]->at(nest_level)->setVar(name, value);

  return false;
}
}  // namespace sym
