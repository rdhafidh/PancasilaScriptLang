#include <gtest/gtest.h>
#include <testparsing.h>
#include <tree/ParseTree.h>

TEST(ParseFileTest, TestNull) {
  TestParsing p;

  auto res = p.testParsing("");
  EXPECT_EQ(false, res.is_ok_parsing);
  EXPECT_EQ(nullptr, res.treeOut);
}

TEST(ParseFileTest, TestInvalidToken) {
  TestParsing p;

  auto res = p.testParsing("as sa");
  EXPECT_EQ(false, res.is_ok_parsing);
  EXPECT_EQ(nullptr, res.treeOut);
}
TEST(ParseNum, TestSimpleNumAssignDecim) {
  TestParsing p;

  auto res = p.testParsing("va=1;");
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseNum, TestSimpleNumAssignFloat1) {
  TestParsing p;

  auto res = p.testParsing("va=1.2;");
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseNum, TestSimpleNumAssignFloat2) {
  TestParsing p;

  auto res = p.testParsing("va=.212;");
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseExpr, OneExpr1NumFloat1) {
  TestParsing p;

  auto res = p.testParsing("3.212;");
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseExpr, OneExpr1NumFloat2) {
  TestParsing p;

  auto res = p.testParsing(".10;");
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseExpr, OneExpr1NumInt) {
  TestParsing p;

  auto res = p.testParsing("10;");
  EXPECT_EQ(true, res.is_ok_parsing); 
} 
TEST(ParseExpr, OneExpr2IDArithSubAlias1) {
  TestParsing p;

  auto res = p.testParsing("sa-sa;");
  EXPECT_EQ(true, res.is_ok_parsing); 
} 
TEST(ParseExpr, OneExpr2IDArithPlusAlias1) {
  TestParsing p;

  auto res = p.testParsing("sa+sa;");
  EXPECT_EQ(true, res.is_ok_parsing); 
} 
TEST(ParseExpr, OneExpr2IDArithMulAlias1) {
  TestParsing p;

  auto res = p.testParsing("sa*sa;");
  EXPECT_EQ(true, res.is_ok_parsing); 
} 
TEST(ParseExpr, OneExpr2IDArithSubMinusAlias1) {
  TestParsing p;

  auto res = p.testParsing("-sa-sa;");
  EXPECT_EQ(true, res.is_ok_parsing); 
} 
TEST(ParseExpr, OneExpr2IDArithDivAlias1) {
  TestParsing p;

  auto res = p.testParsing("sa/sa;");
  EXPECT_EQ(true, res.is_ok_parsing); 
} 
TEST(ParseExpr, TwoExpr1IDArithDivAndPlusAlias1) {
  TestParsing p;

  auto res = p.testParsing("sa/sa;sa+.1;");
  EXPECT_EQ(true, res.is_ok_parsing); 
} 
TEST(ParseExpr, TwoExpr1IDArithPlusAndDivAlias1) {
  TestParsing p;

  auto res = p.testParsing("sa+sa;sa/1;");
  EXPECT_EQ(true, res.is_ok_parsing); 
} 

TEST(ParseExpr, OneExpr1IDAlias) {
  TestParsing p;

  auto res = p.testParsing("fa;");
  EXPECT_EQ(true, res.is_ok_parsing); 
}

TEST(ParseIF, IF1) {
  TestParsing p;

  std::string buf="jika (benar) { 2 ;} ";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF2MinusNum) {
  TestParsing p;

  std::string buf="jika (saLAH)  { sa ; }";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF2MinusNumFloat) {
  TestParsing p;

  std::string buf="jika (saLAH) { -2.23 ;} ";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF2MinusNumFloatVar) {
  TestParsing p;

  std::string buf="jika (saLAH) { x=-2.23;} ";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IFExprWithArithAndVarMulAndDiv) {
  TestParsing p;

  std::string buf="jika (BENar) { x=-2-3; }";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF2MinusNumArithWithoutVar) {
  TestParsing p;

  std::string buf="jika (FALSE) { 1-2.23; }";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF2MinusNumArithWithoutVarAndIDAlias) {
  TestParsing p;

  std::string buf="jika (benAR) { 1-2.23*sa; }";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF2MultiExprArithMulAndAssignComplexArith) {
  TestParsing p;

  std::string buf="jika (TRUE) { 1-2.23*sa;_esa3=3*sa-2+(-3.4);_e+=323-2;} ";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF3NestedIFWithElse1) {
  TestParsing p;

  std::string buf="IF (BENAR) { jiKA (trUE){ 2;} else { 43;} } ";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF3NestedIFWithoutElse2) {
  TestParsing p;

  std::string buf="jika (BENAR) { IF (FALse) { 3;} else {3;}} ";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF3NestedIFWithElse2) {
  TestParsing p;

  std::string buf="jika (BENAR) { IF (FALse) { 3;} else {3;}} lainJIKA (FALSE=1) { if (salaH){ ad_1+=1+2*23;ad_1-=22; } } ";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseIF, IF3NestedElse1) {
  TestParsing p;

std::string buf="jika (BENAR) { IF (FALse) { 3;} else {3;}} lainJIKA (FALSE=1) { if (salaH){ ad_1+=1+2*23;ad_1-=22; } } else { jika(True != sa) { da+=2-3; }}  ";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}
TEST(ParseFunc, FuncDeclare1) {
  TestParsing p;

  std::string buf=" fn foo (asa,da_1) { SA+=12*2-1; if(sa) { sa-=2-2; } }";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
} 

TEST(ParseFunc, FuncExec1) {
  TestParsing p;

  std::string buf=" fn foo (asa,da_1) { SA+=12*2-1; if(sa) { sa-=2-2; } } foo(10,20);";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}

TEST(ParseWhile, WhileTest1) {
  TestParsing p;

  std::string buf=" fn foo (asa,da_1) { SA+=12*2-1; if(sa) { sa-=2-2; } } foo(10,20); while (foo(10,20)) { va;}";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}

TEST(IDMemberFuncProperty, IDAppendNdimArrayItemHandler) {
  TestParsing p;

  std::string buf=" fn foo (asa,da_1) { SA+=12*2-1; if(sa) { sa-=2-2; } sa.appendNdimArrayItem((21-1),sa-1,foo(2)); ddd=sa.appendNdimArrayItem((21-1),sa-1,foo(2)); } ";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}

TEST(ArrayNDIMInit, Init) {
  TestParsing p;

  std::string buf="xa[][][]; fn bar(){ sa[][][];} if(s=d){sa[][][]; while(s>=1) {ss[][][][];} }";
  auto res = p.testParsing(buf);
  EXPECT_EQ(true, res.is_ok_parsing); 
}

int main(int a, char **b) {
  ::testing::InitGoogleTest(&a, b);
  int ret{RUN_ALL_TESTS()};
  return ret;
}