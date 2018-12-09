#include "env.h"
#include <func.h>
#include <objlist.h>
#include <whileloop.h>
namespace sym {
Env::Env() {
  objs = std::make_shared<ObjList>();
  funcs = std::make_shared<FuncList>();
  loopObjs = std::make_shared<WhileLoopObjectList>();
}

Env::~Env() {}

std::shared_ptr<Env> Env::create() {
  std::shared_ptr<Env> ev = std::make_shared<Env>();
  return ev;
}

void Env::appendValue(const std::pair<std::string, val::ValueAbs> &var) {
  (*objs) << var;
}

void Env::appendFunction(std::shared_ptr<Func> newFunc) {
  if (newFunc && !funcs->exists(newFunc)) {
    (*funcs) << newFunc;
  }
}

void Env::appendLoop(std::shared_ptr<WhileLoopObject> newLoop) {
  if (newLoop && !loopObjs->exists(newLoop)) {
    (*loopObjs) << newLoop;
  }
}

std::shared_ptr<FuncList> Env::functions() { return funcs; }

std::shared_ptr<ObjList> Env::objects() { return objs; }

std::shared_ptr<WhileLoopObjectList> Env::loops() { return loopObjs; }

}  // namespace sym
