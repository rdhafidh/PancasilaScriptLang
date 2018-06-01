#include <gtest/gtest.h>





int main(int a,char **b){
    ::testing::InitGoogleTest(&a, b);
      int ret { RUN_ALL_TESTS() };
      return ret; 
}