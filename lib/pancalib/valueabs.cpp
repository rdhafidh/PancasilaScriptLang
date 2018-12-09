#include "valueabs.h"
#include <utility>
namespace val {
ValueAbs::ValueAbs() : value(VariantType()) {}

VariantClass ValueAbs::getVariant() const { return value; }

std::pair<bool, VariantType> ValueAbs::asVariant() const {
  return (value.index() == 0)
             ? std::make_pair(true, std::get<VariantType>(value))
             : std::make_pair(false, VariantType());
}

std::pair<bool, VariantTypeList> ValueAbs::asVariantList() const {
  return (value.index() == 1)
             ? std::make_pair(true, std::get<VariantTypeList>(value))
             : std::make_pair(false, VariantTypeList());
}

std::pair<bool, VariantTypeNDimArray> ValueAbs::asVariantNDimArray() const {
  return (value.index() == 2)
             ? std::make_pair(true, std::get<VariantTypeNDimArray>(value))
             : std::make_pair(false, VariantTypeNDimArray(0));
}

ValueAbs::ValueAbs(const VariantType &var) : value(var) {}
ValueAbs::ValueAbs(const VariantTypeList &var) : value(var) {}
ValueAbs::ValueAbs(const VariantTypeNDimArray &var) : value(var) {}
ValueAbs::ValueAbs(double n) : value(VariantType(n)) {}
ValueAbs::ValueAbs(const std::string &n) : value(VariantType(n)) {}
ValueAbs::ValueAbs(bool n) : value(VariantType(n)) {}
ValueAbs::ValueAbs(int64_t n) : value(VariantType(n)) {}
ValueAbs::~ValueAbs() {}
ValueAbs::ValueAbs(VariantType &&var) : value(var) { var.setNull(); }
ValueAbs::ValueAbs(VariantTypeList &&var) : value(std::move(var)) {}
ValueAbs::ValueAbs(VariantTypeNDimArray &&var) : value(std::move(var)) {}

}  // namespace val

bool operator==(const val::ValueAbs &left, const val::VariantType &right) {
  bool ok = false;
  auto var = left.getVariant();
  switch (var.index()) {
    case 0:
      ok = std::get<val::VariantType>(var) == right;
      break;
    default:
      break;
  }
  return ok;
}

bool operator!=(const val::ValueAbs &left, const val::VariantType &right) {
  return (left == right) == false;
}

bool operator==(const val::ValueAbs &left, const val::VariantTypeList &right) {
  bool ok = false;
  auto var = left.getVariant();
  switch (var.index()) {
    case 1:
      ok = std::get<val::VariantTypeList>(var) == right;
      break;
    default:
      break;
  }
  return ok;
}

bool operator!=(const val::ValueAbs &left, const val::VariantTypeList &right) {
  return (left == right) == false;
}

bool operator==(const val::ValueAbs &left,
                const val::VariantTypeNDimArray &right) {
  bool ok = false;
  auto var = left.getVariant();
  switch (var.index()) {
    case 2:
      ok = std::get<val::VariantTypeNDimArray>(var) == right;
      break;
    default:
      break;
  }
  return ok;
}

bool operator!=(const val::ValueAbs &left,
                const val::VariantTypeNDimArray &right) {
  return (left == right) == false;
}

std::ostream &operator<<(std::ostream &os, const val::ValueAbs &value) {
  auto var = value.getVariant();
  switch (var.index()) {
    case 0:
      os << std::get<val::VariantType>(var);
      break;
    case 1:
      os << std::get<val::VariantTypeList>(var);
      break;
    case 2:
      os << std::get<val::VariantTypeNDimArray>(var);
      break;
    default:
      break;
  }
  return os;
}

template <typename T>
bool CompareVariantType(const val::ValueAbs &left, const T &val) {
  bool ok = false;
  auto var = left.getVariant();
  switch (var.index()) {
    case 0:
      ok = std::get<val::VariantType>(var) == val;
      break;
    default:
      break;
  }
  return ok;
}

bool operator==(const val::ValueAbs &left, double right) {
  return CompareVariantType<double>(left, right);
}

bool operator!=(const val::ValueAbs &left, double right) {
  return (left == right) == false;
}

bool operator==(const val::ValueAbs &left, bool right) {
  return CompareVariantType<bool>(left, right);
}

bool operator!=(const val::ValueAbs &left, bool right) {
  return (left == right) == false;
}

bool operator==(const val::ValueAbs &left, int64_t right) {
  return CompareVariantType<int64_t>(left, right);
}

bool operator!=(const val::ValueAbs &left, int64_t right) {
  return (left == right) == false;
}

bool operator==(const val::ValueAbs &left, const std::string &right) {
  return CompareVariantType<std::string>(left, right);
}

bool operator!=(const val::ValueAbs &left, const std::string &right) {
  return (left == right) == false;
}

bool operator==(const val::ValueAbs &left, const val::ValueAbs &right) {
  bool ok = false;
  auto var = right.getVariant();
  switch (var.index()) {
    case 0:
      ok = left == std::get<val::VariantType>(var);
      break;
    case 1:
      ok = left == std::get<val::VariantTypeList>(var);
      break;
    case 2:
      ok = left == std::get<val::VariantTypeNDimArray>(var);
      break;
    default:
      break;
  }
  return ok;
}

bool operator!=(const val::ValueAbs &left, const val::ValueAbs &right) {
  return (left == right) == false;
}
