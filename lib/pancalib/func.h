#ifndef FUNC_H
#define FUNC_H

#include <objlist.h>
#include <functional>
#include <memory>
#include <vector>

namespace sym {

enum class FuncInfoType { FUNCTION_IS_FROM_SCRIPT, FUNCTION_IS_EMBEDDED_CPP };

typedef std::function<val::ValueAbs(const val::VariantTypeList &)> FuncObj;

class FuncInfo {
 public:
  FuncInfo() = default;
  ~FuncInfo();
  static std::shared_ptr<FuncInfo> makeFuncInfo(
      const std::string &fname, const val::VariantTypeList &args, int argCount);
  static std::shared_ptr<FuncInfo> makeFuncInfoEmbeddedCPP(
      const std::string &fname, int argCount, const FuncObj &obj);
  std::string name;
  val::VariantTypeList arg;
  int argcount;
  val::ValueAbs retval;
  FuncInfoType type;
  FuncObj fobj;
};

class WhileLoopObject;
class WhileLoopObjectList;
class WhileLoop;

enum class FunctionReturnType {
  RETURN_IS_VOID,
  RETURN_IS_BY_VARNAME,
  RETURN_IS_BY_DIRECT_VALUE
};

enum class DynamicFunctionCPPRetStatusCode {
  ERROR_UNDEFINED,
  NO_ERROR,
  ERROR_NO_FUNCTION_SPECIFIED,
  ERROR_UNKNOWN_EXECEPTION
};

class Func {
 public:
  Func(std::shared_ptr<Env> env, std::shared_ptr<FuncInfo> inf);
  ~Func();

  Func &operator<<(const std::pair<std::string, val::ValueAbs> &var);
  Func &operator<<(std::shared_ptr<WhileLoopObject> newLoop);

  std::shared_ptr<FuncInfo> getInfo();
  val::ValueAbs getRetValue();
  bool setVar(const std::string &name, const val::ValueAbs &data);
  std::shared_ptr<ObjList> getObjs();
  std::pair<bool, val::ValueAbs> findVar(const std::string &name);
  size_t varSize() const;
  
  void setFunctionArgs(const val::VariantTypeList &args);
  DynamicFunctionCPPRetStatusCode dynamicCPPFunctionErrorCode() const;
  bool isOkDynamicCPPExecute() const;

  bool setReturnIndexFromVarName(const std::string &varName);
  void setReturnValue(const val::ValueAbs &value);
  void setReturnIsVoid();

  size_t loopSize() const;
  std::shared_ptr<WhileLoopObject> loopAt(size_t index);

 private:
  std::weak_ptr<Env> ev;
  std::shared_ptr<ObjList> objs;
  std::shared_ptr<FuncInfo> info;
  std::shared_ptr<WhileLoopObjectList> loop;
  val::ValueAbs retValue;
  std::string returnVarname;
  FunctionReturnType funcRetType;
  val::VariantTypeList fargs;
  DynamicFunctionCPPRetStatusCode dfcppcode;
};

class FuncList {
 public:
  FuncList() = default;
  ~FuncList();
  size_t size() const;
  FuncList &operator<<(std::shared_ptr<Func> newFunc);
  std::shared_ptr<Func> findFunction(const std::string &name, int argCount);
  void clearFirst();
  void clearLast();
  std::shared_ptr<Func> at(size_t index);
  bool exists(std::shared_ptr<Func> func);

 private:
  std::vector<std::shared_ptr<Func> > funcs;
};
}  // namespace sym
#endif  // FUNC_H
