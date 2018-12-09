#include <env.h>
#include <func.h>
#include <gtest/gtest.h>
#include <valueabs.h>
#include <whileloop.h>
#include <iostream>
#include <memory>
#if defined(_MSC_VER) && (_DEBUG)
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <stdlib.h>
#endif

TEST(FuncTest, FuncBasic) {
  using namespace std::string_literals;
  using namespace sym;
  auto ev = Env::create();
  std::shared_ptr<Func> fun(
      new Func(ev, FuncInfo::makeFuncInfo("soni", val::VariantTypeList(), 0)));
  (*fun) << std::make_pair("dadang", "bar"s);
  EXPECT_EQ(true, fun->findVar("dadang").second == "bar"s);
  EXPECT_EQ(true, fun->varSize() == 1);
  ev->appendFunction(fun);
  EXPECT_EQ(true, ev->functions()->findFunction("soni", 0) == fun);
  ev->functions()->clearLast();
  EXPECT_EQ(true, ev->functions()->size() == 0);
  ev->appendFunction(fun);
  ev->appendFunction(std::make_shared<Func>(
      ev, FuncInfo::makeFuncInfo("dia", val::VariantTypeList(), 0)));
  EXPECT_EQ(true, ev->functions()->size() == 2);
  ev->functions()->clearFirst();
  EXPECT_EQ(true, ev->functions()->size() == 1);
  EXPECT_EQ(true, ev->functions()->findFunction("dia", 0)->varSize() == 0);
}

TEST(Loop, TestLoop) {
  using namespace std::string_literals;
  using namespace sym;
  auto ev = Env::create();
  std::shared_ptr<WhileLoopObject> loop(new WhileLoopObject(ev));
  ev->appendLoop(loop);
  auto m = std::make_shared<WhileLoop>(loop);
  m->addVar(std::make_pair("ok", val::VariantType(false)));
  m->addVar(std::make_pair("doing", val::VariantType((int64_t)30)));
  EXPECT_EQ(true, m->varSize() == 2);
  *loop << m;
  auto fn = std::make_shared<Func>(
      ev, FuncInfo::makeFuncInfo("bar", val::VariantTypeList(), 0));
  *fn << std::make_pair("dadang", val::VariantType("iphone xs"s));
  EXPECT_EQ(true, fn->varSize() == 1);
  EXPECT_EQ(true, fn->findVar("dadang").second == std::string("iphone xs"));
  loop->setParentFunction(fn);
  EXPECT_EQ(true, loop->findVar("dadang").second == std::string("iphone xs"));
  EXPECT_EQ(true, loop->at(0)->setVar("ok", val::VariantType("ok set"s)));
  EXPECT_EQ(true, loop->findVar("ok").second == "ok set"s);
  loop->at(0)->addVar(std::make_pair("palu", val::VariantType("donggala"s)));
  EXPECT_EQ(true, loop->at(0)->varSize() == 3);
  EXPECT_EQ(true, loop->at(0)->findVar("palu").second == "donggala"s);
  m->dumpVar();
  EXPECT_EQ(true, loop->findVar("doing").second == (int64_t)30);
  EXPECT_EQ(true, loop->setVar("doing", val::VariantType("dying"s)));
  EXPECT_EQ(true, loop->findVar("doing").second == "dying"s);
  EXPECT_EQ(true,
            loop->parentFunction()->findVar("dadang").second == "iphone xs"s);
  EXPECT_EQ(true, loop->parentFunction()->setVar(
                      "dadang", val::VariantType("nama orang"s)));
  EXPECT_EQ(true,
            loop->parentFunction()->findVar("dadang").second == "nama orang"s);

  EXPECT_EQ(false, loop->setVar("non_exist", val::VariantType("unused"s)));
  EXPECT_EQ(false, loop->findVar("non_exist").first);
  EXPECT_EQ(false, loop->parentFunction()->findVar("non_exist").first);
  EXPECT_EQ(false, loop->parentFunction()->setVar("non_exist",
                                                  val::VariantType("word"s)));
  auto l1 = std::make_shared<WhileLoop>(loop);
  auto l2 = std::make_shared<WhileLoop>(loop);
  *loop << l1 << l2;
  EXPECT_EQ(true, loop->size() == 3);
  EXPECT_EQ(true, ev->loops()->size() == 1);
  ev->appendLoop(loop);
  EXPECT_EQ(true, ev->loops()->size() == 1);
  EXPECT_EQ(true, ev->loops()->at(0) == loop);
}

TEST(Loop, FunctionLoop) {
  using namespace std::string_literals;
  using namespace sym;
  auto ev = Env::create();
  auto fn = std::make_shared<Func>(
      ev, FuncInfo::makeFuncInfo("foo", val::VariantTypeList(), 0));
  ev->appendFunction(fn);
  std::shared_ptr<WhileLoopObject> obj1 = std::make_shared<WhileLoopObject>(ev);
  auto loop1 = std::make_shared<WhileLoop>(obj1);
  *obj1 << loop1;
  loop1->addVar(std::make_pair("var", (int64_t)10));
  auto loop2 = std::make_shared<WhileLoop>(obj1);
  *obj1 << loop2;
  EXPECT_EQ(false, loop2->addVar(std::make_pair("var", "foo"s)));
  EXPECT_EQ(true, loop1->existFromVarName("var"));
  EXPECT_EQ(false, loop2->existFromVarName("var"));
  EXPECT_EQ(true, loop2->varSize() == 0);
  EXPECT_EQ(true, obj1->setVar("var", "foo"s));
  EXPECT_EQ(true, loop1->findVar("var").second == "foo"s);
  *fn << obj1;
  EXPECT_EQ(true, fn->loopSize() == 1);
  EXPECT_EQ(true, fn->getRetValue() == val::VariantType());
}

TEST(ValueAbs, Test) {
  using namespace val;
  using namespace std::string_literals;
  ValueAbs vl;
  EXPECT_EQ(true, vl == VariantType());
  VariantTypeList arr(VariantTypeList() << "foo"s
                                        << "bar"s << 31.31 << (bool)true);
  vl = std::move(arr);
  EXPECT_EQ(true, arr == VariantTypeList());
  EXPECT_EQ(true, vl == VariantTypeList() << "foo"s
                                          << "bar"s << 31.31 << (bool)true);
  std::cout << "\narray: " << vl;
  vl = 3.123;
  EXPECT_EQ(true, vl == val::VariantType(3.123));
  vl = (bool)false;
  EXPECT_EQ(true, vl == val::VariantType((bool)false));
  vl = "foo"s;
  EXPECT_EQ(true, vl == val::VariantType("foo"s));
  vl = std::numeric_limits<int64_t>::max();
  EXPECT_EQ(true, vl == val::VariantType(std::numeric_limits<int64_t>::max()));
  arr << "foo"s
      << "bar"s;
  VariantTypeNDimArray ndim(2);
  ndim << arr << arr;
  vl = ndim;
  EXPECT_EQ(true, vl == ndim);
  std::cout << "\nvl :" << vl;
  vl = std::move(ndim);
  EXPECT_EQ(true, ndim == VariantTypeNDimArray(0));
}

TEST(EnvTest, TestVars) {
  using namespace std::string_literals;
  using namespace sym;
  auto ev = Env::create();
  ev->appendValue(std::make_pair("foo", val::VariantType((bool)false)));
  ev->appendValue(std::make_pair("bar", val::VariantType((int64_t)10)));
  EXPECT_EQ(true, ev->objects()->size() == 2);
  std::string str("foo str!!");
  EXPECT_EQ(true, ev->objects()->setVar("foo", val::VariantType(str)));
  EXPECT_EQ(true, ev->objects()->findVar("foo").first);
  EXPECT_EQ(true, ev->objects()->findVar("foo").second == str);
  val::VariantTypeList array;
  array << val::VariantType(2.4) << val::VariantType(str);
  ev->appendValue(std::make_pair("array", array));
  EXPECT_EQ(true, ev->objects()->size() == 3);
  EXPECT_EQ(true, ev->objects()->findVar("array").second == array);
}

TEST(EnvTest, TestFuncs) {
  using namespace std::string_literals;
  using namespace sym;
  auto ev = Env::create();
  auto fnc = std::make_shared<Func>(
      ev, FuncInfo::makeFuncInfo("foo", val::VariantTypeList(), 0));
  ev->appendFunction(fnc);
  EXPECT_EQ(true, ev->functions()->findFunction("foo", 0) != nullptr);
  (*ev->functions()->findFunction("foo", 0))
      << std::make_pair("var1", val::VariantType((bool)true))
      << std::make_pair("var2", val::VariantType(std::string("foo bar")));
  EXPECT_EQ(true, ev->functions()->findFunction("foo", 0)->varSize() == 2);
  EXPECT_EQ(
      true,
      ev->functions()->findFunction("foo", 0)->findVar("var1").second != ""s);
  EXPECT_EQ(
      true,
      ev->functions()->findFunction("foo", 0)->findVar("var2").second != ""s);
  EXPECT_EQ(true,
            ev->functions()
                    ->findFunction("foo", 0)
                    ->getRetValue()
                    .asVariant()
                    .second.getType() == val::TypeData::TYPE_IS_UNDEFINED);
  EXPECT_EQ(true,
            ev->functions()->findFunction("foo", 0)->setReturnIndexFromVarName(
                "var1"));
  EXPECT_EQ(true, ev->functions()
                          ->findFunction("foo", 0)
                          ->getRetValue()
                          .asVariant()
                          .second.getType() == val::TypeData::TYPE_IS_BOOL);
  EXPECT_EQ(true,
            ev->functions()->findFunction("foo", 0)->setReturnIndexFromVarName(
                "var2"));
  auto value = std::get<std::string>(ev->functions()
                                         ->findFunction("foo", 0)
                                         ->getRetValue()
                                         .asVariant()
                                         .second.getVar());
  EXPECT_EQ(true,
            ev->functions()->findFunction("foo", 0)->getRetValue() == value);
}

TEST(EnvTest, FuncTestByDynamicCPPCode) {
  using namespace std::string_literals;
  using namespace sym;
  auto ev = Env::create();
  auto fnc = std::make_shared<Func>(
      ev, FuncInfo::makeFuncInfoEmbeddedCPP("foo", 0, nullptr));
  ev->appendFunction(fnc);
  EXPECT_EQ(true, fnc->getRetValue() == val::ValueAbs());
  EXPECT_EQ(true,
            fnc->dynamicCPPFunctionErrorCode() ==
                DynamicFunctionCPPRetStatusCode::ERROR_NO_FUNCTION_SPECIFIED);

  auto fnc1 = std::make_shared<Func>(
      ev, FuncInfo::makeFuncInfoEmbeddedCPP(
              "print", 1, [](const val::VariantTypeList &args) {
                if (args.size() == 1) {
                  std::cout << "\nfrom cpp code:" << args.at(0).second << "\n";
                }
                return val::ValueAbs();
              }));
  fnc1->setFunctionArgs(val::VariantTypeList() << "foo"s);
  ev->appendFunction(fnc1);
  EXPECT_EQ(true, ev->functions()->findFunction("print", 1)->getRetValue() ==
                      val::ValueAbs());
  EXPECT_EQ(true, fnc1->dynamicCPPFunctionErrorCode() ==
                      DynamicFunctionCPPRetStatusCode::NO_ERROR);
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
