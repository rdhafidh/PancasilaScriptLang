
// Generated from D:/masteraplikasi/stuff/projectall/rilis/PancasilaScriptLang/PancasilaScriptLang.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PancasilaScriptLangParser.h"


namespace PancasilaScriptLang {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by PancasilaScriptLangParser.
 */
class  PancasilaScriptLangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PancasilaScriptLangParser.
   */
    virtual antlrcpp::Any visitProg(PancasilaScriptLangParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitStat(PancasilaScriptLangParser::StatContext *context) = 0;

    virtual antlrcpp::Any visitExprList(PancasilaScriptLangParser::ExprListContext *context) = 0;

    virtual antlrcpp::Any visitHandleMulDiv(PancasilaScriptLangParser::HandleMulDivContext *context) = 0;

    virtual antlrcpp::Any visitHandlePlusMinus(PancasilaScriptLangParser::HandlePlusMinusContext *context) = 0;

    virtual antlrcpp::Any visitHandleInt(PancasilaScriptLangParser::HandleIntContext *context) = 0;

    virtual antlrcpp::Any visitHandleIDMemberFuncProperty(PancasilaScriptLangParser::HandleIDMemberFuncPropertyContext *context) = 0;

    virtual antlrcpp::Any visitHandleFunction(PancasilaScriptLangParser::HandleFunctionContext *context) = 0;

    virtual antlrcpp::Any visitHandleBrackets(PancasilaScriptLangParser::HandleBracketsContext *context) = 0;

    virtual antlrcpp::Any visitHandleIdentifier(PancasilaScriptLangParser::HandleIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitHandleTrue(PancasilaScriptLangParser::HandleTrueContext *context) = 0;

    virtual antlrcpp::Any visitHandleFalse(PancasilaScriptLangParser::HandleFalseContext *context) = 0;

    virtual antlrcpp::Any visitHandleFloat(PancasilaScriptLangParser::HandleFloatContext *context) = 0;

    virtual antlrcpp::Any visitHandleAssign(PancasilaScriptLangParser::HandleAssignContext *context) = 0;

    virtual antlrcpp::Any visitHandleAssignArray(PancasilaScriptLangParser::HandleAssignArrayContext *context) = 0;

    virtual antlrcpp::Any visitHandleAssignAdd(PancasilaScriptLangParser::HandleAssignAddContext *context) = 0;

    virtual antlrcpp::Any visitHandleAssignSub(PancasilaScriptLangParser::HandleAssignSubContext *context) = 0;

    virtual antlrcpp::Any visitHandleAssignMul(PancasilaScriptLangParser::HandleAssignMulContext *context) = 0;

    virtual antlrcpp::Any visitHandleAssignDiv(PancasilaScriptLangParser::HandleAssignDivContext *context) = 0;

    virtual antlrcpp::Any visitExprBool(PancasilaScriptLangParser::ExprBoolContext *context) = 0;

    virtual antlrcpp::Any visitArrayExprs(PancasilaScriptLangParser::ArrayExprsContext *context) = 0;

    virtual antlrcpp::Any visitBoolType(PancasilaScriptLangParser::BoolTypeContext *context) = 0;

    virtual antlrcpp::Any visitExprLine(PancasilaScriptLangParser::ExprLineContext *context) = 0;

    virtual antlrcpp::Any visitExprScopeBlock(PancasilaScriptLangParser::ExprScopeBlockContext *context) = 0;

    virtual antlrcpp::Any visitIfExpr(PancasilaScriptLangParser::IfExprContext *context) = 0;

    virtual antlrcpp::Any visitWhileExpr(PancasilaScriptLangParser::WhileExprContext *context) = 0;

    virtual antlrcpp::Any visitFuncArgsDef(PancasilaScriptLangParser::FuncArgsDefContext *context) = 0;

    virtual antlrcpp::Any visitFuncExpr(PancasilaScriptLangParser::FuncExprContext *context) = 0;

    virtual antlrcpp::Any visitFuncRet(PancasilaScriptLangParser::FuncRetContext *context) = 0;

    virtual antlrcpp::Any visitHandleDeclareFunctionWithArgs(PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext *context) = 0;

    virtual antlrcpp::Any visitHandleDeclareFunctionWithoutArgs(PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext *context) = 0;

    virtual antlrcpp::Any visitFuncArgs(PancasilaScriptLangParser::FuncArgsContext *context) = 0;

    virtual antlrcpp::Any visitFuncCommand(PancasilaScriptLangParser::FuncCommandContext *context) = 0;

    virtual antlrcpp::Any visitIdMemberFuncProprety(PancasilaScriptLangParser::IdMemberFuncPropretyContext *context) = 0;

    virtual antlrcpp::Any visitInitNDimArray(PancasilaScriptLangParser::InitNDimArrayContext *context) = 0;


};

}  // namespace PancasilaScriptLang
