#include "func.h"
#include <env.h>
#include <whileloop.h>
#include <utility>
namespace sym {
Func::Func(std::shared_ptr<Env> env, std::shared_ptr<FuncInfo> inf)
    : ev(env),
      info(inf),
      funcRetType(FunctionReturnType::RETURN_IS_VOID),
      dfcppcode(DynamicFunctionCPPRetStatusCode::ERROR_UNDEFINED) {
  objs = std::make_shared<ObjList>();
  loop = std::make_shared<WhileLoopObjectList>();
}

Func::~Func() {}

Func &Func::operator<<(const std::pair<std::string, val::ValueAbs> &var) {
  if (info && !ev.expired()) {
    (*objs) << var;
  }
  return *this;
}

Func &Func::operator<<(std::shared_ptr<WhileLoopObject> newLoop) {
  if (info && !ev.expired() && newLoop && !loop->exists(newLoop)) {
    (*loop) << newLoop;
  }
  return *this;
}

std::shared_ptr<ObjList> Func::getObjs() { return objs; }

std::shared_ptr<FuncInfo> Func::getInfo() { return info; }

val::ValueAbs Func::getRetValue() {
  if (info && info->type == FuncInfoType::FUNCTION_IS_EMBEDDED_CPP) {
    val::ValueAbs valueret = val::ValueAbs();
    try {
      valueret = info->fobj(fargs);
      dfcppcode = DynamicFunctionCPPRetStatusCode::NO_ERROR;
    } catch (const std::bad_function_call &) {
      dfcppcode = DynamicFunctionCPPRetStatusCode::ERROR_NO_FUNCTION_SPECIFIED;
    } catch (...) {
      dfcppcode = DynamicFunctionCPPRetStatusCode::ERROR_UNKNOWN_EXECEPTION;
    }
    return valueret;
  }
  switch (funcRetType) {
    case FunctionReturnType::RETURN_IS_BY_DIRECT_VALUE:
      break;
    case FunctionReturnType::RETURN_IS_BY_VARNAME:
      return objs->findVar(returnVarname).second;
      break;
    default:
      retValue = val::ValueAbs();
      break;
  }
  return retValue;
}

bool Func::setVar(const std::string &name, const val::ValueAbs &data) {
  if (auto ev_lck = ev.lock()) {
    bool e = ev_lck->objects()->setVar(name, data);
    if (e) {
      return e;
    }
  }
  return objs->setVar(name, data);
}

std::pair<bool, val::ValueAbs> Func::findVar(const std::string &name) {
  if (auto evlock = ev.lock()) {
    std::pair<bool, val::ValueAbs> retval = evlock->objects()->findVar(name);
    if (retval.first) {
      return retval;
    }
  }
  return objs->findVar(name);
}

size_t Func::varSize() const { return objs->getList()->size(); }

void Func::setFunctionArgs(const val::VariantTypeList &args) { fargs = args; }

DynamicFunctionCPPRetStatusCode Func::dynamicCPPFunctionErrorCode() const {
  return dfcppcode;
}

bool Func::isOkDynamicCPPExecute() const {
  return dfcppcode == DynamicFunctionCPPRetStatusCode::NO_ERROR;
}

bool Func::setReturnIndexFromVarName(const std::string &varName) {
  if (info && info->type == FuncInfoType::FUNCTION_IS_EMBEDDED_CPP) {
    return false;
  }
  bool c = objs->exists(varName);
  if (!c) return c;

  returnVarname = varName;
  funcRetType = FunctionReturnType::RETURN_IS_BY_VARNAME;
  return c;
}

void Func::setReturnValue(const val::ValueAbs &value) {
  if (info && info->type == FuncInfoType::FUNCTION_IS_EMBEDDED_CPP) {
    return;
  }
  funcRetType = FunctionReturnType::RETURN_IS_BY_DIRECT_VALUE;
  retValue = value;
}

void Func::setReturnIsVoid() {
  if (info && info->type == FuncInfoType::FUNCTION_IS_EMBEDDED_CPP) {
    return;
  }
  retValue = val::ValueAbs();
  funcRetType = FunctionReturnType::RETURN_IS_VOID;
  returnVarname = "";
}

size_t Func::loopSize() const { return loop->size(); }

std::shared_ptr<WhileLoopObject> Func::loopAt(size_t index) {
  return loop->at(index);
}

FuncInfo::~FuncInfo() {}

std::shared_ptr<FuncInfo> FuncInfo::makeFuncInfo(
    const std::string &fname, const val::VariantTypeList &args, int argCount) {
  std::shared_ptr<FuncInfo> fun = std::make_shared<FuncInfo>();
  fun->name = fname;
  fun->arg = args;
  fun->type = FuncInfoType::FUNCTION_IS_FROM_SCRIPT;
  fun->argcount = argCount;
  return fun;
}

std::shared_ptr<FuncInfo> FuncInfo::makeFuncInfoEmbeddedCPP(
    const std::string &fname, int argCount, const FuncObj &obj) {
  std::shared_ptr<FuncInfo> fun = std::make_shared<FuncInfo>();
  fun->name = fname;
  fun->type = FuncInfoType::FUNCTION_IS_EMBEDDED_CPP;
  fun->argcount = argCount;
  fun->fobj = obj;
  return fun;
}

FuncList::~FuncList() {}

size_t FuncList::size() const { return funcs.size(); }

FuncList &FuncList::operator<<(std::shared_ptr<Func> newFunc) {
  if (newFunc) {
    funcs.emplace_back(newFunc);
  }
  return *this;
}

std::shared_ptr<Func> FuncList::findFunction(const std::string &name,
                                             int argCount) {
  for (auto func : funcs) {
    if (func && func->getInfo() && func->getInfo()->name == name &&
        func->getInfo()->argcount == argCount) {
      return func;
    }
  }
  return nullptr;
}

void FuncList::clearFirst() {
  if (funcs.size() > 0) {
    funcs.erase(funcs.begin() + 0);
  }
}

void FuncList::clearLast() {
  if (funcs.size() > 0) {
    funcs.erase(funcs.begin() + funcs.size() - 1);
  }
}

std::shared_ptr<Func> FuncList::at(size_t index) {
  if (index < (size_t)0 || index >= funcs.size()) {
    return nullptr;
  }
  return funcs.at(index);
}

bool FuncList::exists(std::shared_ptr<Func> func) {
  for (size_t x = 0; x < funcs.size(); x += 1) {
    if (funcs.at(x) == func) {
      return true;
    }
  }
  return false;
}
}  // namespace sym
