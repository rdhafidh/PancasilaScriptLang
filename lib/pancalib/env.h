#ifndef ENV_H
#define ENV_H

#include <memory>
#include <utility>
#include <vector>
#include "valueabs.h"

namespace sym {
class Func;
class ObjList;
class FuncList;
class WhileLoopObject;
class WhileLoop;
class WhileLoopObjectList;

class Env {
 public:
  static std::shared_ptr<Env> create();   
  void appendValue(const std::pair<std::string, val::ValueAbs> &var);
  void appendFunction(std::shared_ptr<Func> newFunc);
  void appendLoop(std::shared_ptr<WhileLoopObject> newLoop);

  std::shared_ptr<FuncList> functions();
  std::shared_ptr<ObjList> objects();
  std::shared_ptr<WhileLoopObjectList> loops();
  ~Env(); 
  Env();

 private: 
  std::shared_ptr<ObjList> objs;
  std::shared_ptr<FuncList> funcs;
  std::shared_ptr<WhileLoopObjectList> loopObjs;
};
}  // namespace sym
#endif  // ENV_H
