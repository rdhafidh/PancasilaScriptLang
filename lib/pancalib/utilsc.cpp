#include "utilsc.h"
#include <cstdlib>
#include <cerrno>
#include <iostream>

std::pair<bool, int64_t> Utilsc::stringToNumber(const std::string &num, int base)
{   
    char *end=nullptr;
    int64_t retval=(int64_t)std::strtoll(num.c_str(),&end,base);
    if(errno !=0){
        return  std::make_pair(false,(int64_t)-1);
    }   
    return std::make_pair(true,retval);
}
