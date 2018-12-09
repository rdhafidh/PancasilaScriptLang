
// Generated from D:/masteraplikasi/stuff/projectall/rilis/PancasilaScriptLang/PancasilaScriptLang.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PancasilaScriptLangParser.h"


namespace PancasilaScriptLang {

/**
 * This interface defines an abstract listener for a parse tree produced by PancasilaScriptLangParser.
 */
class  PancasilaScriptLangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(PancasilaScriptLangParser::ProgContext *ctx) = 0;
  virtual void exitProg(PancasilaScriptLangParser::ProgContext *ctx) = 0;

  virtual void enterStat(PancasilaScriptLangParser::StatContext *ctx) = 0;
  virtual void exitStat(PancasilaScriptLangParser::StatContext *ctx) = 0;

  virtual void enterExprList(PancasilaScriptLangParser::ExprListContext *ctx) = 0;
  virtual void exitExprList(PancasilaScriptLangParser::ExprListContext *ctx) = 0;

  virtual void enterHandleMulDiv(PancasilaScriptLangParser::HandleMulDivContext *ctx) = 0;
  virtual void exitHandleMulDiv(PancasilaScriptLangParser::HandleMulDivContext *ctx) = 0;

  virtual void enterHandlePlusMinus(PancasilaScriptLangParser::HandlePlusMinusContext *ctx) = 0;
  virtual void exitHandlePlusMinus(PancasilaScriptLangParser::HandlePlusMinusContext *ctx) = 0;

  virtual void enterHandleInt(PancasilaScriptLangParser::HandleIntContext *ctx) = 0;
  virtual void exitHandleInt(PancasilaScriptLangParser::HandleIntContext *ctx) = 0;

  virtual void enterHandleIDMemberFuncProperty(PancasilaScriptLangParser::HandleIDMemberFuncPropertyContext *ctx) = 0;
  virtual void exitHandleIDMemberFuncProperty(PancasilaScriptLangParser::HandleIDMemberFuncPropertyContext *ctx) = 0;

  virtual void enterHandleFunction(PancasilaScriptLangParser::HandleFunctionContext *ctx) = 0;
  virtual void exitHandleFunction(PancasilaScriptLangParser::HandleFunctionContext *ctx) = 0;

  virtual void enterHandleBrackets(PancasilaScriptLangParser::HandleBracketsContext *ctx) = 0;
  virtual void exitHandleBrackets(PancasilaScriptLangParser::HandleBracketsContext *ctx) = 0;

  virtual void enterHandleIdentifier(PancasilaScriptLangParser::HandleIdentifierContext *ctx) = 0;
  virtual void exitHandleIdentifier(PancasilaScriptLangParser::HandleIdentifierContext *ctx) = 0;

  virtual void enterHandleTrue(PancasilaScriptLangParser::HandleTrueContext *ctx) = 0;
  virtual void exitHandleTrue(PancasilaScriptLangParser::HandleTrueContext *ctx) = 0;

  virtual void enterHandleFalse(PancasilaScriptLangParser::HandleFalseContext *ctx) = 0;
  virtual void exitHandleFalse(PancasilaScriptLangParser::HandleFalseContext *ctx) = 0;

  virtual void enterHandleFloat(PancasilaScriptLangParser::HandleFloatContext *ctx) = 0;
  virtual void exitHandleFloat(PancasilaScriptLangParser::HandleFloatContext *ctx) = 0;

  virtual void enterHandleAssign(PancasilaScriptLangParser::HandleAssignContext *ctx) = 0;
  virtual void exitHandleAssign(PancasilaScriptLangParser::HandleAssignContext *ctx) = 0;

  virtual void enterHandleAssignArray(PancasilaScriptLangParser::HandleAssignArrayContext *ctx) = 0;
  virtual void exitHandleAssignArray(PancasilaScriptLangParser::HandleAssignArrayContext *ctx) = 0;

  virtual void enterHandleAssignAdd(PancasilaScriptLangParser::HandleAssignAddContext *ctx) = 0;
  virtual void exitHandleAssignAdd(PancasilaScriptLangParser::HandleAssignAddContext *ctx) = 0;

  virtual void enterHandleAssignSub(PancasilaScriptLangParser::HandleAssignSubContext *ctx) = 0;
  virtual void exitHandleAssignSub(PancasilaScriptLangParser::HandleAssignSubContext *ctx) = 0;

  virtual void enterHandleAssignMul(PancasilaScriptLangParser::HandleAssignMulContext *ctx) = 0;
  virtual void exitHandleAssignMul(PancasilaScriptLangParser::HandleAssignMulContext *ctx) = 0;

  virtual void enterHandleAssignDiv(PancasilaScriptLangParser::HandleAssignDivContext *ctx) = 0;
  virtual void exitHandleAssignDiv(PancasilaScriptLangParser::HandleAssignDivContext *ctx) = 0;

  virtual void enterExprBool(PancasilaScriptLangParser::ExprBoolContext *ctx) = 0;
  virtual void exitExprBool(PancasilaScriptLangParser::ExprBoolContext *ctx) = 0;

  virtual void enterArrayExprs(PancasilaScriptLangParser::ArrayExprsContext *ctx) = 0;
  virtual void exitArrayExprs(PancasilaScriptLangParser::ArrayExprsContext *ctx) = 0;

  virtual void enterBoolType(PancasilaScriptLangParser::BoolTypeContext *ctx) = 0;
  virtual void exitBoolType(PancasilaScriptLangParser::BoolTypeContext *ctx) = 0;

  virtual void enterExprLine(PancasilaScriptLangParser::ExprLineContext *ctx) = 0;
  virtual void exitExprLine(PancasilaScriptLangParser::ExprLineContext *ctx) = 0;

  virtual void enterExprScopeBlock(PancasilaScriptLangParser::ExprScopeBlockContext *ctx) = 0;
  virtual void exitExprScopeBlock(PancasilaScriptLangParser::ExprScopeBlockContext *ctx) = 0;

  virtual void enterIfExpr(PancasilaScriptLangParser::IfExprContext *ctx) = 0;
  virtual void exitIfExpr(PancasilaScriptLangParser::IfExprContext *ctx) = 0;

  virtual void enterWhileExpr(PancasilaScriptLangParser::WhileExprContext *ctx) = 0;
  virtual void exitWhileExpr(PancasilaScriptLangParser::WhileExprContext *ctx) = 0;

  virtual void enterFuncArgsDef(PancasilaScriptLangParser::FuncArgsDefContext *ctx) = 0;
  virtual void exitFuncArgsDef(PancasilaScriptLangParser::FuncArgsDefContext *ctx) = 0;

  virtual void enterFuncExpr(PancasilaScriptLangParser::FuncExprContext *ctx) = 0;
  virtual void exitFuncExpr(PancasilaScriptLangParser::FuncExprContext *ctx) = 0;

  virtual void enterFuncRet(PancasilaScriptLangParser::FuncRetContext *ctx) = 0;
  virtual void exitFuncRet(PancasilaScriptLangParser::FuncRetContext *ctx) = 0;

  virtual void enterHandleDeclareFunctionWithArgs(PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext *ctx) = 0;
  virtual void exitHandleDeclareFunctionWithArgs(PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext *ctx) = 0;

  virtual void enterHandleDeclareFunctionWithoutArgs(PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext *ctx) = 0;
  virtual void exitHandleDeclareFunctionWithoutArgs(PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext *ctx) = 0;

  virtual void enterFuncArgs(PancasilaScriptLangParser::FuncArgsContext *ctx) = 0;
  virtual void exitFuncArgs(PancasilaScriptLangParser::FuncArgsContext *ctx) = 0;

  virtual void enterFuncCommand(PancasilaScriptLangParser::FuncCommandContext *ctx) = 0;
  virtual void exitFuncCommand(PancasilaScriptLangParser::FuncCommandContext *ctx) = 0;

  virtual void enterIdMemberFuncProprety(PancasilaScriptLangParser::IdMemberFuncPropretyContext *ctx) = 0;
  virtual void exitIdMemberFuncProprety(PancasilaScriptLangParser::IdMemberFuncPropretyContext *ctx) = 0;

  virtual void enterInitNDimArray(PancasilaScriptLangParser::InitNDimArrayContext *ctx) = 0;
  virtual void exitInitNDimArray(PancasilaScriptLangParser::InitNDimArrayContext *ctx) = 0;


};

}  // namespace PancasilaScriptLang
