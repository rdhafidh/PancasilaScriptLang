#ifndef OBJLIST_H
#define OBJLIST_H
#include <valueabs.h>
#include <unordered_map>
#include <utility>
#include <memory>

namespace sym {
class Env;

typedef std::unordered_map<std::string, val::ValueAbs> Objs;

class ObjList {
 public:
  ObjList()=default;
  ~ObjList();
  void appendObj(const std::pair<std::string, val::ValueAbs> &obj);
  ObjList &operator<<(const std::pair<std::string, val::ValueAbs> &obj);

  std::pair<bool, val::ValueAbs> findVar(const std::string &fromVarName) const;
  bool setVar(const std::string &fromVarName, const val::ValueAbs &value);
  bool exists(const std::string &varName) const;
  size_t size()const;
  bool deleteVar(const std::string &varname);
  void clearAllVar();
  void dump();

 Objs* getList(); 

 private: 
  Objs list;
};
 
}  // namespace sym
#endif  // OBJLIST_H
