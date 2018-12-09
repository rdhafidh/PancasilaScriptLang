#ifndef UTILSC_H
#define UTILSC_H

#include <utility> 
#include <cstdint>
#include <string>

class Utilsc
{
public:
    Utilsc()=default;
    ~Utilsc()=default;
    static std::pair<bool,int64_t> stringToNumber(const std::string &num,int base=10);
};

#endif // UTILSC_H
