#include <gtest/gtest.h>
#include <testparsing.h>
#include <tree/ParseTree.h>

TEST(ParseFileTest, TestNull) {
  TestParsing p;

  auto res = p.testParsing("");
  EXPECT_EQ(false, res.is_ok_parsing);
  EXPECT_EQ(nullptr, res.treeOut);
}

TEST(ParseFileTest, TestInvalidName) {
  TestParsing p;

  auto res = p.testParsing("as sa");
  EXPECT_EQ(false, res.is_ok_parsing);
  EXPECT_EQ(nullptr, res.treeOut);
}

int main(int a, char **b) {
  ::testing::InitGoogleTest(&a, b);
  int ret{RUN_ALL_TESTS()};
  return ret;
}