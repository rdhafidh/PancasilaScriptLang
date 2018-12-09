#include "objlist.h"
#include <env.h>
#include <iostream>

namespace sym {

ObjList::~ObjList() {}

void ObjList::appendObj(const std::pair<std::string, val::ValueAbs> &obj) {
  list[obj.first] = obj.second;
}

ObjList &ObjList::operator<<(const std::pair<std::string, val::ValueAbs> &obj) {
  appendObj(obj);
  return *this;
}

std::pair<bool, val::ValueAbs> ObjList::findVar(
    const std::string &fromVarName) const {
  auto search = list.find(fromVarName);
  if (search != list.end()) {
    return std::make_pair(true, search->second);
  }
  return std::make_pair(false, val::ValueAbs());
}

bool ObjList::setVar(const std::string &fromVarName,
                     const val::ValueAbs &value) {
  bool c = list.count(fromVarName) == 1;
  if (c) {
    list[fromVarName] = value;
  }
  return c;
}

bool ObjList::exists(const std::string &varName) const {
  return list.count(varName) == 1;
}

size_t ObjList::size() const { return list.size(); }

bool ObjList::deleteVar(const std::string &varname) {
  if (exists(varname)) {
    list.erase(varname);
    return true;
  }
  return false;
}

void ObjList::clearAllVar() { list.clear(); }

void ObjList::dump() {
  std::cout << "\ndumping var: ";
  for (const auto &vvar : list) {
    std::cout << "\n var " << vvar.first << " : " << vvar.second;
  }
  std::cout << "\n";
}

Objs *ObjList::getList() { return &list; }

}  // namespace sym
