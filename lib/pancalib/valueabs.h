#ifndef VALUEABS_H
#define VALUEABS_H
#include <varianttype.h>

namespace val {

typedef std::variant<VariantType, VariantTypeList, VariantTypeNDimArray>
    VariantClass;

class ValueAbs {
 public:
  ValueAbs();
  ValueAbs(double n);
  ValueAbs(const std::string &n);
  ValueAbs(bool n);
  ValueAbs(int64_t n);
  ValueAbs(const VariantType &var);
  ValueAbs(const VariantTypeList &var);
  ValueAbs(const VariantTypeNDimArray &var);
  ValueAbs(VariantType &&var);
  ValueAbs(VariantTypeList &&var);
  ValueAbs(VariantTypeNDimArray &&var);
  ~ValueAbs();

  ValueAbs &operator=(const ValueAbs &) = default;
  VariantClass getVariant() const;
  std::pair<bool, VariantType> asVariant() const;
  std::pair<bool, VariantTypeList> asVariantList() const;
  std::pair<bool, VariantTypeNDimArray> asVariantNDimArray() const;

 private:
  VariantClass value;
};
}  // namespace val

bool operator==(const val::ValueAbs &left, const val::ValueAbs &right);
bool operator!=(const val::ValueAbs &left, const val::ValueAbs &right);

bool operator==(const val::ValueAbs &left, const val::VariantType &right);
bool operator!=(const val::ValueAbs &left, const val::VariantType &right);

bool operator==(const val::ValueAbs &left, const val::VariantTypeList &right);
bool operator!=(const val::ValueAbs &left, const val::VariantTypeList &right);

bool operator==(const val::ValueAbs &left,
                const val::VariantTypeNDimArray &right);
bool operator!=(const val::ValueAbs &left,
                const val::VariantTypeNDimArray &right);

bool operator==(const val::ValueAbs &left, double right);
bool operator!=(const val::ValueAbs &left, double right);

bool operator==(const val::ValueAbs &left, bool right);
bool operator!=(const val::ValueAbs &left, bool right);

bool operator==(const val::ValueAbs &left, int64_t right);
bool operator!=(const val::ValueAbs &left, int64_t right);

bool operator==(const val::ValueAbs &left, const std::string &right);
bool operator!=(const val::ValueAbs &left, const std::string &right);

std::ostream &operator<<(std::ostream &os, const val::ValueAbs &value);

#endif  // VALUEABS_H
