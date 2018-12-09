
// Generated from D:/masteraplikasi/stuff/projectall/rilis/PancasilaScriptLang/PancasilaScriptLang.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace PancasilaScriptLang {


class  PancasilaScriptLangParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, TANDANDIMARRAYINIT = 17, WHILE = 18, FNFUNC = 19, 
    FNRET = 20, INT = 21, FLOAT = 22, IF = 23, ELSEIF = 24, ELSE = 25, FALSE = 26, 
    TRUE = 27, EQ = 28, NOTEQ = 29, GR = 30, LT = 31, GREQ = 32, LTEQ = 33, 
    MIN = 34, ID = 35, WS = 36
  };

  enum {
    RuleProg = 0, RuleStat = 1, RuleExprList = 2, RuleExpr = 3, RuleAssign = 4, 
    RuleExprBool = 5, RuleArrayExprs = 6, RuleBoolType = 7, RuleExprLine = 8, 
    RuleExprScopeBlock = 9, RuleIfExpr = 10, RuleWhileExpr = 11, RuleFuncArgsDef = 12, 
    RuleFuncExpr = 13, RuleFuncRet = 14, RuleFuncDef = 15, RuleFuncArgs = 16, 
    RuleFuncCommand = 17, RuleIdMemberFuncProprety = 18, RuleInitNDimArray = 19
  };

  PancasilaScriptLangParser(antlr4::TokenStream *input);
  ~PancasilaScriptLangParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class StatContext;
  class ExprListContext;
  class ExprContext;
  class AssignContext;
  class ExprBoolContext;
  class ArrayExprsContext;
  class BoolTypeContext;
  class ExprLineContext;
  class ExprScopeBlockContext;
  class IfExprContext;
  class WhileExprContext;
  class FuncArgsDefContext;
  class FuncExprContext;
  class FuncRetContext;
  class FuncDefContext;
  class FuncArgsContext;
  class FuncCommandContext;
  class IdMemberFuncPropretyContext;
  class InitNDimArrayContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprListContext *exprList();
    AssignContext *assign();
    InitNDimArrayContext *initNDimArray();
    IfExprContext *ifExpr();
    FuncDefContext *funcDef();
    WhileExprContext *whileExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  ExprListContext : public antlr4::ParserRuleContext {
  public:
    ExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprListContext* exprList();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  HandleMulDivContext : public ExprContext {
  public:
    HandleMulDivContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandlePlusMinusContext : public ExprContext {
  public:
    HandlePlusMinusContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleIntContext : public ExprContext {
  public:
    HandleIntContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *MIN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleIDMemberFuncPropertyContext : public ExprContext {
  public:
    HandleIDMemberFuncPropertyContext(ExprContext *ctx);

    IdMemberFuncPropretyContext *idMemberFuncProprety();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleFunctionContext : public ExprContext {
  public:
    HandleFunctionContext(ExprContext *ctx);

    FuncCommandContext *funcCommand();
    antlr4::tree::TerminalNode *MIN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleBracketsContext : public ExprContext {
  public:
    HandleBracketsContext(ExprContext *ctx);

    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleIdentifierContext : public ExprContext {
  public:
    HandleIdentifierContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *MIN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleTrueContext : public ExprContext {
  public:
    HandleTrueContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *TRUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleFalseContext : public ExprContext {
  public:
    HandleFalseContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *FALSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleFloatContext : public ExprContext {
  public:
    HandleFloatContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *MIN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AssignContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  HandleAssignContext : public AssignContext {
  public:
    HandleAssignContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleAssignMulContext : public AssignContext {
  public:
    HandleAssignMulContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleAssignArrayContext : public AssignContext {
  public:
    HandleAssignArrayContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ArrayExprsContext *arrayExprs();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleAssignSubContext : public AssignContext {
  public:
    HandleAssignSubContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleAssignAddContext : public AssignContext {
  public:
    HandleAssignAddContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleAssignDivContext : public AssignContext {
  public:
    HandleAssignDivContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignContext* assign();

  class  ExprBoolContext : public antlr4::ParserRuleContext {
  public:
    ExprBoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BoolTypeContext *> boolType();
    BoolTypeContext* boolType(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NOTEQ();
    antlr4::tree::TerminalNode *GR();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GREQ();
    antlr4::tree::TerminalNode *LTEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprBoolContext* exprBool();

  class  ArrayExprsContext : public antlr4::ParserRuleContext {
  public:
    ArrayExprsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayExprsContext* arrayExprs();

  class  BoolTypeContext : public antlr4::ParserRuleContext {
  public:
    BoolTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *MIN();
    FuncCommandContext *funcCommand();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolTypeContext* boolType();

  class  ExprLineContext : public antlr4::ParserRuleContext {
  public:
    ExprLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    InitNDimArrayContext *initNDimArray();
    AssignContext *assign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprLineContext* exprLine();

  class  ExprScopeBlockContext : public antlr4::ParserRuleContext {
  public:
    ExprScopeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhileExprContext *whileExpr();
    ExprLineContext *exprLine();
    IfExprContext *ifExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprScopeBlockContext* exprScopeBlock();

  class  IfExprContext : public antlr4::ParserRuleContext {
  public:
    IfExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExprBoolContext *> exprBool();
    ExprBoolContext* exprBool(size_t i);
    std::vector<ExprScopeBlockContext *> exprScopeBlock();
    ExprScopeBlockContext* exprScopeBlock(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfExprContext* ifExpr();

  class  WhileExprContext : public antlr4::ParserRuleContext {
  public:
    WhileExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExprBoolContext *exprBool();
    std::vector<ExprScopeBlockContext *> exprScopeBlock();
    ExprScopeBlockContext* exprScopeBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileExprContext* whileExpr();

  class  FuncArgsDefContext : public antlr4::ParserRuleContext {
  public:
    FuncArgsDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncArgsDefContext* funcArgsDef();

  class  FuncExprContext : public antlr4::ParserRuleContext {
  public:
    FuncExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    InitNDimArrayContext *initNDimArray();
    AssignContext *assign();
    IfExprContext *ifExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncExprContext* funcExpr();

  class  FuncRetContext : public antlr4::ParserRuleContext {
  public:
    FuncRetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FNRET();
    ExprContext *expr();
    ArrayExprsContext *arrayExprs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncRetContext* funcRet();

  class  FuncDefContext : public antlr4::ParserRuleContext {
  public:
    FuncDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FuncDefContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FuncDefContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  HandleDeclareFunctionWithArgsContext : public FuncDefContext {
  public:
    HandleDeclareFunctionWithArgsContext(FuncDefContext *ctx);

    antlr4::tree::TerminalNode *FNFUNC();
    antlr4::tree::TerminalNode *ID();
    FuncArgsDefContext *funcArgsDef();
    std::vector<FuncExprContext *> funcExpr();
    FuncExprContext* funcExpr(size_t i);
    FuncRetContext *funcRet();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandleDeclareFunctionWithoutArgsContext : public FuncDefContext {
  public:
    HandleDeclareFunctionWithoutArgsContext(FuncDefContext *ctx);

    antlr4::tree::TerminalNode *FNFUNC();
    antlr4::tree::TerminalNode *ID();
    std::vector<FuncExprContext *> funcExpr();
    FuncExprContext* funcExpr(size_t i);
    FuncRetContext *funcRet();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FuncDefContext* funcDef();

  class  FuncArgsContext : public antlr4::ParserRuleContext {
  public:
    FuncArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncArgsContext* funcArgs();

  class  FuncCommandContext : public antlr4::ParserRuleContext {
  public:
    FuncCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    FuncArgsContext *funcArgs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncCommandContext* funcCommand();

  class  IdMemberFuncPropretyContext : public antlr4::ParserRuleContext {
  public:
    IdMemberFuncPropretyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdMemberFuncPropretyContext* idMemberFuncProprety();

  class  InitNDimArrayContext : public antlr4::ParserRuleContext {
  public:
    InitNDimArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> TANDANDIMARRAYINIT();
    antlr4::tree::TerminalNode* TANDANDIMARRAYINIT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitNDimArrayContext* initNDimArray();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace PancasilaScriptLang
