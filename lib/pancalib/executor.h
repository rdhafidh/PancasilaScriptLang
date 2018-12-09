#ifndef EXECUTOR_H
#define EXECUTOR_H

#include <PancasilaScriptLangVisitor.h> 
#include <valueabs.h>

namespace PancasilaScriptLang {

class Executor : PancasilaScriptLangVisitor {
 public:
  Executor();
  ~Executor();

 protected:
  virtual antlrcpp::Any visitProg(PancasilaScriptLangParser::ProgContext *context) ;

  virtual antlrcpp::Any visitStat(PancasilaScriptLangParser::StatContext *context);

  virtual antlrcpp::Any visitExprList(PancasilaScriptLangParser::ExprListContext *context);

  virtual antlrcpp::Any visitHandleMulDiv(PancasilaScriptLangParser::HandleMulDivContext *context);

  virtual antlrcpp::Any visitHandlePlusMinus(PancasilaScriptLangParser::HandlePlusMinusContext *context);

  virtual antlrcpp::Any visitHandleInt(PancasilaScriptLangParser::HandleIntContext *context);

  virtual antlrcpp::Any visitHandleIDMemberFuncProperty(PancasilaScriptLangParser::HandleIDMemberFuncPropertyContext *context);

  virtual antlrcpp::Any visitHandleFunction(PancasilaScriptLangParser::HandleFunctionContext *context);

  virtual antlrcpp::Any visitHandleBrackets(PancasilaScriptLangParser::HandleBracketsContext *context);

  virtual antlrcpp::Any visitHandleIdentifier(PancasilaScriptLangParser::HandleIdentifierContext *context);

  virtual antlrcpp::Any visitHandleTrue(PancasilaScriptLangParser::HandleTrueContext *context);

  virtual antlrcpp::Any visitHandleFalse(PancasilaScriptLangParser::HandleFalseContext *context);

  virtual antlrcpp::Any visitHandleFloat(PancasilaScriptLangParser::HandleFloatContext *context);

  virtual antlrcpp::Any visitHandleAssign(PancasilaScriptLangParser::HandleAssignContext *context);

  virtual antlrcpp::Any visitHandleAssignArray(PancasilaScriptLangParser::HandleAssignArrayContext *context);

  virtual antlrcpp::Any visitHandleAssignAdd(PancasilaScriptLangParser::HandleAssignAddContext *context);

  virtual antlrcpp::Any visitHandleAssignSub(PancasilaScriptLangParser::HandleAssignSubContext *context) ;

  virtual antlrcpp::Any visitHandleAssignMul(PancasilaScriptLangParser::HandleAssignMulContext *context);

  virtual antlrcpp::Any visitHandleAssignDiv(PancasilaScriptLangParser::HandleAssignDivContext *context);

  virtual antlrcpp::Any visitExprBool(PancasilaScriptLangParser::ExprBoolContext *context);

  virtual antlrcpp::Any visitArrayExprs(PancasilaScriptLangParser::ArrayExprsContext *context);

  virtual antlrcpp::Any visitBoolType(PancasilaScriptLangParser::BoolTypeContext *context);

  virtual antlrcpp::Any visitExprLine(PancasilaScriptLangParser::ExprLineContext *context);

  virtual antlrcpp::Any visitExprScopeBlock(PancasilaScriptLangParser::ExprScopeBlockContext *context);

  virtual antlrcpp::Any visitIfExpr(PancasilaScriptLangParser::IfExprContext *context);

  virtual antlrcpp::Any visitWhileExpr(PancasilaScriptLangParser::WhileExprContext *context) ;

  virtual antlrcpp::Any visitFuncArgsDef(PancasilaScriptLangParser::FuncArgsDefContext *context);

  virtual antlrcpp::Any visitFuncExpr(PancasilaScriptLangParser::FuncExprContext *context);

  virtual antlrcpp::Any visitFuncRet(PancasilaScriptLangParser::FuncRetContext *context);

  virtual antlrcpp::Any visitHandleDeclareFunctionWithArgs(PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext *context);

  virtual antlrcpp::Any visitHandleDeclareFunctionWithoutArgs(PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext *context);

  virtual antlrcpp::Any visitFuncArgs(PancasilaScriptLangParser::FuncArgsContext *context);

  virtual antlrcpp::Any visitFuncCommand(PancasilaScriptLangParser::FuncCommandContext *context);

  virtual antlrcpp::Any visitIdMemberFuncProprety(PancasilaScriptLangParser::IdMemberFuncPropretyContext *context);

  virtual antlrcpp::Any visitInitNDimArray(PancasilaScriptLangParser::InitNDimArrayContext *context); 

 private:
  std::pair<bool,val::ValueAbs> convertAnyToVariant(const antlrcpp::Any &any);
  
  void doThrowifAnyErrorVariant(val::TypeErrorVariant  evar,const std::string &additionalMsg);
  
  val::ValueAbs HandleArith(PancasilaScriptLang::PancasilaScriptLangParser::ExprContext *left, PancasilaScriptLang::PancasilaScriptLangParser::ExprContext *right, const std::string &op);
  
};

}  // namespace PancasilaScriptLang
#endif  // EXECUTOR_H
