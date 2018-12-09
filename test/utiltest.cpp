#include <gtest/gtest.h>
#include <utilsc.h>
#include <sstream>
#include <numeric>

TEST(StringToNumber, One){
    using namespace std::string_literals;
    auto num1="111111"s;
    auto ret1= Utilsc::stringToNumber (num1);
    EXPECT_EQ(true,ret1.first==true);
    EXPECT_EQ(true,ret1.second==(int64_t)111111);
    int64_t number=std::numeric_limits<int64_t>::max ();
    std::stringstream stm;
    stm<<number;
    ret1=Utilsc::stringToNumber (stm.str ());
    EXPECT_EQ(true,ret1.first==true);
    EXPECT_EQ(true,ret1.second==number);
    auto dostmreset=[&stm](){
        stm.str ("");
        stm.clear ();  
    };
    dostmreset();
    number=std::numeric_limits<int64_t>::min ();
    stm<<number; 
    ret1=Utilsc::stringToNumber (stm.str ()); 
    EXPECT_EQ(true,ret1.first==true);
    EXPECT_EQ(true,ret1.second==number);
    dostmreset();
    ret1=Utilsc::stringToNumber ("foo bar"s);
    EXPECT_EQ(false,ret1.first==false);
    ret1=Utilsc::stringToNumber ("-1foo bar"s);
    EXPECT_EQ(false,ret1.first==false);
    ret1=Utilsc::stringToNumber ("foo-1 bar"s);
    EXPECT_EQ(false,ret1.first==false);
    ret1=Utilsc::stringToNumber ("-1@!$%^"s);
    EXPECT_EQ(false,ret1.first==false);
    ret1=Utilsc::stringToNumber ("-@!$%^"s);
    EXPECT_EQ(false,ret1.first==false);
    ret1=Utilsc::stringToNumber ("@!$%^"s);
    EXPECT_EQ(false,ret1.first==false);
}

int main(int argc, char *argv[]) {
  int ret = 0;
  {
    ::testing::InitGoogleTest(&argc, argv);
    ret = {RUN_ALL_TESTS()};
  }

#if defined(_MSC_VER) && (_DEBUG)
  _CrtDumpMemoryLeaks();
#endif
  return ret;
}
