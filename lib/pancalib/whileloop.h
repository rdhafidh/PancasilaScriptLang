#ifndef WHILELOOP_H
#define WHILELOOP_H

#include <functional>
#include <memory>
#include <utility>
#include <vector>
#include "valueabs.h"

namespace sym {
class Env;
class ObjList;
class Func;
class WhileLoopObject;

class WhileLoop {
 public:
  WhileLoop(std::shared_ptr<WhileLoopObject> ev);
  ~WhileLoop(); 
  bool addVar(const std::pair<std::string, val::ValueAbs> &var);
  std::pair<bool, val::ValueAbs> findVar(const std::string &name);
  bool setVar(const std::string &name, const val::ValueAbs &var);
  void dumpVar(); 
  bool existFromVarName(const std::string &name) const;

  size_t varSize() const;

 private:
  std::shared_ptr<ObjList> objs;
  std::shared_ptr<WhileLoopObject> parentObj;
};

class WhileLoopObject {
 public:
  WhileLoopObject(std::shared_ptr<Env> ev);
  ~WhileLoopObject();
  size_t size() const;
  void setParentFunction(std::shared_ptr<Func> fnc);
  std::shared_ptr<Func> parentFunction();

  std::shared_ptr<WhileLoop> at(size_t n);
  WhileLoopObject &operator<<(std::shared_ptr<WhileLoop> loop);

  std::pair<bool, val::ValueAbs> findVar(const std::string &fromVarName) const; 

  bool setVar(const std::string &fromVarName, const val::ValueAbs &value);

  std::shared_ptr<Env> getEnv();
  std::pair<bool, size_t> existFromVarName(const std::string &name) const;
  bool existFromVarNameWithWhileLoopFiltered(
      WhileLoop * excluded, const std::string &varname) const;

 private:
  std::weak_ptr<Env> env;
  std::weak_ptr<Func> mFunc;
  std::vector<std::weak_ptr<WhileLoop> > mLoops;
};

class WhileLoopObjectList {
 public:
  WhileLoopObjectList();
  ~WhileLoopObjectList();
  WhileLoopObjectList &operator<<(std::shared_ptr<WhileLoopObject> newLoop);
  size_t size() const;
  std::shared_ptr<WhileLoopObject> at(size_t index);
  bool exists(std::shared_ptr<WhileLoopObject> loop);

  bool deleteLoopAt(size_t index);
  void clearAllLoops();
  void clearFirst();
  void clearLast();

  std::vector<size_t> findDuplicateVarNameByNestedIndexIncluded(
      const std::string &varname) const;
  bool setVar(const std::string &name, size_t index, size_t nest_level,
              const val::ValueAbs &value);

 private:
  std::vector<std::shared_ptr<WhileLoopObject> > loops;
};
}  // namespace sym
#endif  // WHILELOOP_H
