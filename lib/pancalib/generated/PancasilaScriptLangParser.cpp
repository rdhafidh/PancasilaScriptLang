
// Generated from D:/masteraplikasi/stuff/projectall/rilis/PancasilaScriptLang/PancasilaScriptLang.g4 by ANTLR 4.7.1


#include "PancasilaScriptLangListener.h"
#include "PancasilaScriptLangVisitor.h"

#include "PancasilaScriptLangParser.h"


using namespace antlrcpp;
using namespace PancasilaScriptLang;
using namespace antlr4;

PancasilaScriptLangParser::PancasilaScriptLangParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PancasilaScriptLangParser::~PancasilaScriptLangParser() {
  delete _interpreter;
}

std::string PancasilaScriptLangParser::getGrammarFileName() const {
  return "PancasilaScriptLang.g4";
}

const std::vector<std::string>& PancasilaScriptLangParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PancasilaScriptLangParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

PancasilaScriptLangParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PancasilaScriptLangParser::ProgContext::EOF() {
  return getToken(PancasilaScriptLangParser::EOF, 0);
}

std::vector<PancasilaScriptLangParser::StatContext *> PancasilaScriptLangParser::ProgContext::stat() {
  return getRuleContexts<PancasilaScriptLangParser::StatContext>();
}

PancasilaScriptLangParser::StatContext* PancasilaScriptLangParser::ProgContext::stat(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::StatContext>(i);
}


size_t PancasilaScriptLangParser::ProgContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleProg;
}

void PancasilaScriptLangParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void PancasilaScriptLangParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any PancasilaScriptLangParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::ProgContext* PancasilaScriptLangParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, PancasilaScriptLangParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(40);
      stat();
      setState(43); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PancasilaScriptLangParser::T__4)
      | (1ULL << PancasilaScriptLangParser::WHILE)
      | (1ULL << PancasilaScriptLangParser::FNFUNC)
      | (1ULL << PancasilaScriptLangParser::INT)
      | (1ULL << PancasilaScriptLangParser::FLOAT)
      | (1ULL << PancasilaScriptLangParser::IF)
      | (1ULL << PancasilaScriptLangParser::FALSE)
      | (1ULL << PancasilaScriptLangParser::TRUE)
      | (1ULL << PancasilaScriptLangParser::MIN)
      | (1ULL << PancasilaScriptLangParser::ID))) != 0));
    setState(45);
    match(PancasilaScriptLangParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

PancasilaScriptLangParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PancasilaScriptLangParser::ExprListContext* PancasilaScriptLangParser::StatContext::exprList() {
  return getRuleContext<PancasilaScriptLangParser::ExprListContext>(0);
}

PancasilaScriptLangParser::AssignContext* PancasilaScriptLangParser::StatContext::assign() {
  return getRuleContext<PancasilaScriptLangParser::AssignContext>(0);
}

PancasilaScriptLangParser::InitNDimArrayContext* PancasilaScriptLangParser::StatContext::initNDimArray() {
  return getRuleContext<PancasilaScriptLangParser::InitNDimArrayContext>(0);
}

PancasilaScriptLangParser::IfExprContext* PancasilaScriptLangParser::StatContext::ifExpr() {
  return getRuleContext<PancasilaScriptLangParser::IfExprContext>(0);
}

PancasilaScriptLangParser::FuncDefContext* PancasilaScriptLangParser::StatContext::funcDef() {
  return getRuleContext<PancasilaScriptLangParser::FuncDefContext>(0);
}

PancasilaScriptLangParser::WhileExprContext* PancasilaScriptLangParser::StatContext::whileExpr() {
  return getRuleContext<PancasilaScriptLangParser::WhileExprContext>(0);
}


size_t PancasilaScriptLangParser::StatContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleStat;
}

void PancasilaScriptLangParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void PancasilaScriptLangParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}


antlrcpp::Any PancasilaScriptLangParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::StatContext* PancasilaScriptLangParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, PancasilaScriptLangParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(57);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(47);
      exprList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(48);
      assign();
      setState(49);
      match(PancasilaScriptLangParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(51);
      initNDimArray();
      setState(52);
      match(PancasilaScriptLangParser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(54);
      ifExpr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(55);
      funcDef();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(56);
      whileExpr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprListContext ------------------------------------------------------------------

PancasilaScriptLangParser::ExprListContext::ExprListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PancasilaScriptLangParser::ExprContext *> PancasilaScriptLangParser::ExprListContext::expr() {
  return getRuleContexts<PancasilaScriptLangParser::ExprContext>();
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::ExprListContext::expr(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(i);
}


size_t PancasilaScriptLangParser::ExprListContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleExprList;
}

void PancasilaScriptLangParser::ExprListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprList(this);
}

void PancasilaScriptLangParser::ExprListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprList(this);
}


antlrcpp::Any PancasilaScriptLangParser::ExprListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitExprList(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::ExprListContext* PancasilaScriptLangParser::exprList() {
  ExprListContext *_localctx = _tracker.createInstance<ExprListContext>(_ctx, getState());
  enterRule(_localctx, 4, PancasilaScriptLangParser::RuleExprList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(59);
    expr(0);
    setState(60);
    match(PancasilaScriptLangParser::T__0);
    setState(66);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(61);
        expr(0);
        setState(62);
        match(PancasilaScriptLangParser::T__0); 
      }
      setState(68);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

PancasilaScriptLangParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PancasilaScriptLangParser::ExprContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleExpr;
}

void PancasilaScriptLangParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- HandleMulDivContext ------------------------------------------------------------------

std::vector<PancasilaScriptLangParser::ExprContext *> PancasilaScriptLangParser::HandleMulDivContext::expr() {
  return getRuleContexts<PancasilaScriptLangParser::ExprContext>();
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::HandleMulDivContext::expr(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(i);
}

PancasilaScriptLangParser::HandleMulDivContext::HandleMulDivContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleMulDiv(this);
}
void PancasilaScriptLangParser::HandleMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleMulDiv(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandlePlusMinusContext ------------------------------------------------------------------

std::vector<PancasilaScriptLangParser::ExprContext *> PancasilaScriptLangParser::HandlePlusMinusContext::expr() {
  return getRuleContexts<PancasilaScriptLangParser::ExprContext>();
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::HandlePlusMinusContext::expr(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(i);
}

PancasilaScriptLangParser::HandlePlusMinusContext::HandlePlusMinusContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandlePlusMinusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandlePlusMinus(this);
}
void PancasilaScriptLangParser::HandlePlusMinusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandlePlusMinus(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandlePlusMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandlePlusMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleIntContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleIntContext::INT() {
  return getToken(PancasilaScriptLangParser::INT, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::HandleIntContext::MIN() {
  return getToken(PancasilaScriptLangParser::MIN, 0);
}

PancasilaScriptLangParser::HandleIntContext::HandleIntContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleIntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleInt(this);
}
void PancasilaScriptLangParser::HandleIntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleInt(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleIDMemberFuncPropertyContext ------------------------------------------------------------------

PancasilaScriptLangParser::IdMemberFuncPropretyContext* PancasilaScriptLangParser::HandleIDMemberFuncPropertyContext::idMemberFuncProprety() {
  return getRuleContext<PancasilaScriptLangParser::IdMemberFuncPropretyContext>(0);
}

PancasilaScriptLangParser::HandleIDMemberFuncPropertyContext::HandleIDMemberFuncPropertyContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleIDMemberFuncPropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleIDMemberFuncProperty(this);
}
void PancasilaScriptLangParser::HandleIDMemberFuncPropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleIDMemberFuncProperty(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleIDMemberFuncPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleIDMemberFuncProperty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleFunctionContext ------------------------------------------------------------------

PancasilaScriptLangParser::FuncCommandContext* PancasilaScriptLangParser::HandleFunctionContext::funcCommand() {
  return getRuleContext<PancasilaScriptLangParser::FuncCommandContext>(0);
}

tree::TerminalNode* PancasilaScriptLangParser::HandleFunctionContext::MIN() {
  return getToken(PancasilaScriptLangParser::MIN, 0);
}

PancasilaScriptLangParser::HandleFunctionContext::HandleFunctionContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleFunction(this);
}
void PancasilaScriptLangParser::HandleFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleFunction(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleBracketsContext ------------------------------------------------------------------

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::HandleBracketsContext::expr() {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(0);
}

PancasilaScriptLangParser::HandleBracketsContext::HandleBracketsContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleBracketsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleBrackets(this);
}
void PancasilaScriptLangParser::HandleBracketsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleBrackets(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleBracketsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleBrackets(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleIdentifierContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleIdentifierContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::HandleIdentifierContext::MIN() {
  return getToken(PancasilaScriptLangParser::MIN, 0);
}

PancasilaScriptLangParser::HandleIdentifierContext::HandleIdentifierContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleIdentifier(this);
}
void PancasilaScriptLangParser::HandleIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleIdentifier(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleTrueContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleTrueContext::TRUE() {
  return getToken(PancasilaScriptLangParser::TRUE, 0);
}

PancasilaScriptLangParser::HandleTrueContext::HandleTrueContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleTrueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleTrue(this);
}
void PancasilaScriptLangParser::HandleTrueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleTrue(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleFalseContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleFalseContext::FALSE() {
  return getToken(PancasilaScriptLangParser::FALSE, 0);
}

PancasilaScriptLangParser::HandleFalseContext::HandleFalseContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleFalseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleFalse(this);
}
void PancasilaScriptLangParser::HandleFalseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleFalse(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleFloatContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleFloatContext::FLOAT() {
  return getToken(PancasilaScriptLangParser::FLOAT, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::HandleFloatContext::MIN() {
  return getToken(PancasilaScriptLangParser::MIN, 0);
}

PancasilaScriptLangParser::HandleFloatContext::HandleFloatContext(ExprContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleFloatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleFloat(this);
}
void PancasilaScriptLangParser::HandleFloatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleFloat(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleFloat(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::expr() {
   return expr(0);
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PancasilaScriptLangParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  PancasilaScriptLangParser::ExprContext *previousContext = _localctx;
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, PancasilaScriptLangParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<HandleIntContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(71);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PancasilaScriptLangParser::MIN) {
        setState(70);
        match(PancasilaScriptLangParser::MIN);
      }
      setState(73);
      match(PancasilaScriptLangParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<HandleFloatContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(75);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PancasilaScriptLangParser::MIN) {
        setState(74);
        match(PancasilaScriptLangParser::MIN);
      }
      setState(77);
      match(PancasilaScriptLangParser::FLOAT);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<HandleFunctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(79);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PancasilaScriptLangParser::MIN) {
        setState(78);
        match(PancasilaScriptLangParser::MIN);
      }
      setState(81);
      funcCommand();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<HandleTrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(82);
      match(PancasilaScriptLangParser::TRUE);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<HandleFalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(83);
      match(PancasilaScriptLangParser::FALSE);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<HandleIDMemberFuncPropertyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(84);
      idMemberFuncProprety();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<HandleIdentifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(86);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PancasilaScriptLangParser::MIN) {
        setState(85);
        match(PancasilaScriptLangParser::MIN);
      }
      setState(88);
      match(PancasilaScriptLangParser::ID);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<HandleBracketsContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(89);
      match(PancasilaScriptLangParser::T__4);
      setState(90);
      expr(0);
      setState(91);
      match(PancasilaScriptLangParser::T__5);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(103);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(101);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<HandleMulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(95);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(96);
          dynamic_cast<HandleMulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PancasilaScriptLangParser::T__1

          || _la == PancasilaScriptLangParser::T__2)) {
            dynamic_cast<HandleMulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(97);
          expr(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<HandlePlusMinusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(98);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(99);
          dynamic_cast<HandlePlusMinusContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PancasilaScriptLangParser::T__3

          || _la == PancasilaScriptLangParser::MIN)) {
            dynamic_cast<HandlePlusMinusContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(100);
          expr(10);
          break;
        }

        } 
      }
      setState(105);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

PancasilaScriptLangParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PancasilaScriptLangParser::AssignContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleAssign;
}

void PancasilaScriptLangParser::AssignContext::copyFrom(AssignContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- HandleAssignContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleAssignContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::HandleAssignContext::expr() {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(0);
}

PancasilaScriptLangParser::HandleAssignContext::HandleAssignContext(AssignContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleAssign(this);
}
void PancasilaScriptLangParser::HandleAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleAssign(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleAssignMulContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleAssignMulContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::HandleAssignMulContext::expr() {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(0);
}

PancasilaScriptLangParser::HandleAssignMulContext::HandleAssignMulContext(AssignContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleAssignMulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleAssignMul(this);
}
void PancasilaScriptLangParser::HandleAssignMulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleAssignMul(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleAssignMulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleAssignMul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleAssignArrayContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleAssignArrayContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

PancasilaScriptLangParser::ArrayExprsContext* PancasilaScriptLangParser::HandleAssignArrayContext::arrayExprs() {
  return getRuleContext<PancasilaScriptLangParser::ArrayExprsContext>(0);
}

PancasilaScriptLangParser::HandleAssignArrayContext::HandleAssignArrayContext(AssignContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleAssignArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleAssignArray(this);
}
void PancasilaScriptLangParser::HandleAssignArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleAssignArray(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleAssignArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleAssignArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleAssignSubContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleAssignSubContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::HandleAssignSubContext::expr() {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(0);
}

PancasilaScriptLangParser::HandleAssignSubContext::HandleAssignSubContext(AssignContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleAssignSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleAssignSub(this);
}
void PancasilaScriptLangParser::HandleAssignSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleAssignSub(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleAssignSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleAssignSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleAssignAddContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleAssignAddContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::HandleAssignAddContext::expr() {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(0);
}

PancasilaScriptLangParser::HandleAssignAddContext::HandleAssignAddContext(AssignContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleAssignAddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleAssignAdd(this);
}
void PancasilaScriptLangParser::HandleAssignAddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleAssignAdd(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleAssignAddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleAssignAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleAssignDivContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleAssignDivContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::HandleAssignDivContext::expr() {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(0);
}

PancasilaScriptLangParser::HandleAssignDivContext::HandleAssignDivContext(AssignContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleAssignDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleAssignDiv(this);
}
void PancasilaScriptLangParser::HandleAssignDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleAssignDiv(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleAssignDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleAssignDiv(this);
  else
    return visitor->visitChildren(this);
}
PancasilaScriptLangParser::AssignContext* PancasilaScriptLangParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 8, PancasilaScriptLangParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AssignContext *>(_tracker.createInstance<PancasilaScriptLangParser::HandleAssignContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(106);
      match(PancasilaScriptLangParser::ID);
      setState(107);
      match(PancasilaScriptLangParser::EQ);
      setState(108);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AssignContext *>(_tracker.createInstance<PancasilaScriptLangParser::HandleAssignArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(109);
      match(PancasilaScriptLangParser::ID);
      setState(110);
      match(PancasilaScriptLangParser::EQ);
      setState(111);
      arrayExprs();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AssignContext *>(_tracker.createInstance<PancasilaScriptLangParser::HandleAssignAddContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(112);
      match(PancasilaScriptLangParser::ID);
      setState(113);
      match(PancasilaScriptLangParser::T__6);
      setState(114);
      expr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AssignContext *>(_tracker.createInstance<PancasilaScriptLangParser::HandleAssignSubContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(115);
      match(PancasilaScriptLangParser::ID);
      setState(116);
      match(PancasilaScriptLangParser::T__7);
      setState(117);
      expr(0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AssignContext *>(_tracker.createInstance<PancasilaScriptLangParser::HandleAssignMulContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(118);
      match(PancasilaScriptLangParser::ID);
      setState(119);
      match(PancasilaScriptLangParser::T__8);
      setState(120);
      expr(0);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AssignContext *>(_tracker.createInstance<PancasilaScriptLangParser::HandleAssignDivContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(121);
      match(PancasilaScriptLangParser::ID);
      setState(122);
      match(PancasilaScriptLangParser::T__9);
      setState(123);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprBoolContext ------------------------------------------------------------------

PancasilaScriptLangParser::ExprBoolContext::ExprBoolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PancasilaScriptLangParser::BoolTypeContext *> PancasilaScriptLangParser::ExprBoolContext::boolType() {
  return getRuleContexts<PancasilaScriptLangParser::BoolTypeContext>();
}

PancasilaScriptLangParser::BoolTypeContext* PancasilaScriptLangParser::ExprBoolContext::boolType(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::BoolTypeContext>(i);
}

tree::TerminalNode* PancasilaScriptLangParser::ExprBoolContext::EQ() {
  return getToken(PancasilaScriptLangParser::EQ, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::ExprBoolContext::NOTEQ() {
  return getToken(PancasilaScriptLangParser::NOTEQ, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::ExprBoolContext::GR() {
  return getToken(PancasilaScriptLangParser::GR, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::ExprBoolContext::LT() {
  return getToken(PancasilaScriptLangParser::LT, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::ExprBoolContext::GREQ() {
  return getToken(PancasilaScriptLangParser::GREQ, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::ExprBoolContext::LTEQ() {
  return getToken(PancasilaScriptLangParser::LTEQ, 0);
}


size_t PancasilaScriptLangParser::ExprBoolContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleExprBool;
}

void PancasilaScriptLangParser::ExprBoolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprBool(this);
}

void PancasilaScriptLangParser::ExprBoolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprBool(this);
}


antlrcpp::Any PancasilaScriptLangParser::ExprBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitExprBool(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::ExprBoolContext* PancasilaScriptLangParser::exprBool() {
  ExprBoolContext *_localctx = _tracker.createInstance<ExprBoolContext>(_ctx, getState());
  enterRule(_localctx, 10, PancasilaScriptLangParser::RuleExprBool);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(126);
      boolType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(127);
      boolType();
      setState(128);
      match(PancasilaScriptLangParser::EQ);
      setState(129);
      boolType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(131);
      boolType();
      setState(132);
      match(PancasilaScriptLangParser::NOTEQ);
      setState(133);
      boolType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(135);
      boolType();
      setState(136);
      match(PancasilaScriptLangParser::GR);
      setState(137);
      boolType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(139);
      boolType();
      setState(140);
      match(PancasilaScriptLangParser::LT);
      setState(141);
      boolType();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(143);
      boolType();
      setState(144);
      match(PancasilaScriptLangParser::GREQ);
      setState(145);
      boolType();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(147);
      boolType();
      setState(148);
      match(PancasilaScriptLangParser::LTEQ);
      setState(149);
      boolType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayExprsContext ------------------------------------------------------------------

PancasilaScriptLangParser::ArrayExprsContext::ArrayExprsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PancasilaScriptLangParser::ExprContext *> PancasilaScriptLangParser::ArrayExprsContext::expr() {
  return getRuleContexts<PancasilaScriptLangParser::ExprContext>();
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::ArrayExprsContext::expr(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(i);
}


size_t PancasilaScriptLangParser::ArrayExprsContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleArrayExprs;
}

void PancasilaScriptLangParser::ArrayExprsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayExprs(this);
}

void PancasilaScriptLangParser::ArrayExprsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayExprs(this);
}


antlrcpp::Any PancasilaScriptLangParser::ArrayExprsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitArrayExprs(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::ArrayExprsContext* PancasilaScriptLangParser::arrayExprs() {
  ArrayExprsContext *_localctx = _tracker.createInstance<ArrayExprsContext>(_ctx, getState());
  enterRule(_localctx, 12, PancasilaScriptLangParser::RuleArrayExprs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(PancasilaScriptLangParser::T__10);
    setState(154);
    expr(0);
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PancasilaScriptLangParser::T__11) {
      setState(155);
      match(PancasilaScriptLangParser::T__11);
      setState(156);
      expr(0);
      setState(161);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(162);
    match(PancasilaScriptLangParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolTypeContext ------------------------------------------------------------------

PancasilaScriptLangParser::BoolTypeContext::BoolTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PancasilaScriptLangParser::BoolTypeContext::INT() {
  return getToken(PancasilaScriptLangParser::INT, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::BoolTypeContext::MIN() {
  return getToken(PancasilaScriptLangParser::MIN, 0);
}

PancasilaScriptLangParser::FuncCommandContext* PancasilaScriptLangParser::BoolTypeContext::funcCommand() {
  return getRuleContext<PancasilaScriptLangParser::FuncCommandContext>(0);
}

tree::TerminalNode* PancasilaScriptLangParser::BoolTypeContext::TRUE() {
  return getToken(PancasilaScriptLangParser::TRUE, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::BoolTypeContext::FALSE() {
  return getToken(PancasilaScriptLangParser::FALSE, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::BoolTypeContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}


size_t PancasilaScriptLangParser::BoolTypeContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleBoolType;
}

void PancasilaScriptLangParser::BoolTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolType(this);
}

void PancasilaScriptLangParser::BoolTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolType(this);
}


antlrcpp::Any PancasilaScriptLangParser::BoolTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitBoolType(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::BoolTypeContext* PancasilaScriptLangParser::boolType() {
  BoolTypeContext *_localctx = _tracker.createInstance<BoolTypeContext>(_ctx, getState());
  enterRule(_localctx, 14, PancasilaScriptLangParser::RuleBoolType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(165);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PancasilaScriptLangParser::MIN) {
        setState(164);
        match(PancasilaScriptLangParser::MIN);
      }
      setState(167);
      match(PancasilaScriptLangParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(168);
      funcCommand();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(169);
      match(PancasilaScriptLangParser::TRUE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(170);
      match(PancasilaScriptLangParser::FALSE);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(171);
      match(PancasilaScriptLangParser::ID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprLineContext ------------------------------------------------------------------

PancasilaScriptLangParser::ExprLineContext::ExprLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::ExprLineContext::expr() {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(0);
}

PancasilaScriptLangParser::InitNDimArrayContext* PancasilaScriptLangParser::ExprLineContext::initNDimArray() {
  return getRuleContext<PancasilaScriptLangParser::InitNDimArrayContext>(0);
}

PancasilaScriptLangParser::AssignContext* PancasilaScriptLangParser::ExprLineContext::assign() {
  return getRuleContext<PancasilaScriptLangParser::AssignContext>(0);
}


size_t PancasilaScriptLangParser::ExprLineContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleExprLine;
}

void PancasilaScriptLangParser::ExprLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprLine(this);
}

void PancasilaScriptLangParser::ExprLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprLine(this);
}


antlrcpp::Any PancasilaScriptLangParser::ExprLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitExprLine(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::ExprLineContext* PancasilaScriptLangParser::exprLine() {
  ExprLineContext *_localctx = _tracker.createInstance<ExprLineContext>(_ctx, getState());
  enterRule(_localctx, 16, PancasilaScriptLangParser::RuleExprLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(174);
      expr(0);
      setState(175);
      match(PancasilaScriptLangParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(177);
      initNDimArray();
      setState(178);
      match(PancasilaScriptLangParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(180);
      assign();
      setState(181);
      match(PancasilaScriptLangParser::T__0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprScopeBlockContext ------------------------------------------------------------------

PancasilaScriptLangParser::ExprScopeBlockContext::ExprScopeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PancasilaScriptLangParser::WhileExprContext* PancasilaScriptLangParser::ExprScopeBlockContext::whileExpr() {
  return getRuleContext<PancasilaScriptLangParser::WhileExprContext>(0);
}

PancasilaScriptLangParser::ExprLineContext* PancasilaScriptLangParser::ExprScopeBlockContext::exprLine() {
  return getRuleContext<PancasilaScriptLangParser::ExprLineContext>(0);
}

PancasilaScriptLangParser::IfExprContext* PancasilaScriptLangParser::ExprScopeBlockContext::ifExpr() {
  return getRuleContext<PancasilaScriptLangParser::IfExprContext>(0);
}


size_t PancasilaScriptLangParser::ExprScopeBlockContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleExprScopeBlock;
}

void PancasilaScriptLangParser::ExprScopeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprScopeBlock(this);
}

void PancasilaScriptLangParser::ExprScopeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprScopeBlock(this);
}


antlrcpp::Any PancasilaScriptLangParser::ExprScopeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitExprScopeBlock(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::ExprScopeBlockContext* PancasilaScriptLangParser::exprScopeBlock() {
  ExprScopeBlockContext *_localctx = _tracker.createInstance<ExprScopeBlockContext>(_ctx, getState());
  enterRule(_localctx, 18, PancasilaScriptLangParser::RuleExprScopeBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PancasilaScriptLangParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(185);
        whileExpr();
        break;
      }

      case PancasilaScriptLangParser::T__4:
      case PancasilaScriptLangParser::INT:
      case PancasilaScriptLangParser::FLOAT:
      case PancasilaScriptLangParser::FALSE:
      case PancasilaScriptLangParser::TRUE:
      case PancasilaScriptLangParser::MIN:
      case PancasilaScriptLangParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(186);
        exprLine();
        break;
      }

      case PancasilaScriptLangParser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(187);
        ifExpr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfExprContext ------------------------------------------------------------------

PancasilaScriptLangParser::IfExprContext::IfExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PancasilaScriptLangParser::IfExprContext::IF() {
  return getToken(PancasilaScriptLangParser::IF, 0);
}

std::vector<PancasilaScriptLangParser::ExprBoolContext *> PancasilaScriptLangParser::IfExprContext::exprBool() {
  return getRuleContexts<PancasilaScriptLangParser::ExprBoolContext>();
}

PancasilaScriptLangParser::ExprBoolContext* PancasilaScriptLangParser::IfExprContext::exprBool(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::ExprBoolContext>(i);
}

std::vector<PancasilaScriptLangParser::ExprScopeBlockContext *> PancasilaScriptLangParser::IfExprContext::exprScopeBlock() {
  return getRuleContexts<PancasilaScriptLangParser::ExprScopeBlockContext>();
}

PancasilaScriptLangParser::ExprScopeBlockContext* PancasilaScriptLangParser::IfExprContext::exprScopeBlock(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::ExprScopeBlockContext>(i);
}

std::vector<tree::TerminalNode *> PancasilaScriptLangParser::IfExprContext::ELSEIF() {
  return getTokens(PancasilaScriptLangParser::ELSEIF);
}

tree::TerminalNode* PancasilaScriptLangParser::IfExprContext::ELSEIF(size_t i) {
  return getToken(PancasilaScriptLangParser::ELSEIF, i);
}

tree::TerminalNode* PancasilaScriptLangParser::IfExprContext::ELSE() {
  return getToken(PancasilaScriptLangParser::ELSE, 0);
}


size_t PancasilaScriptLangParser::IfExprContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleIfExpr;
}

void PancasilaScriptLangParser::IfExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfExpr(this);
}

void PancasilaScriptLangParser::IfExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfExpr(this);
}


antlrcpp::Any PancasilaScriptLangParser::IfExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitIfExpr(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::IfExprContext* PancasilaScriptLangParser::ifExpr() {
  IfExprContext *_localctx = _tracker.createInstance<IfExprContext>(_ctx, getState());
  enterRule(_localctx, 20, PancasilaScriptLangParser::RuleIfExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(PancasilaScriptLangParser::IF);
    setState(191);
    match(PancasilaScriptLangParser::T__4);
    setState(192);
    exprBool();
    setState(193);
    match(PancasilaScriptLangParser::T__5);
    setState(194);
    match(PancasilaScriptLangParser::T__13);
    setState(196); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(195);
      exprScopeBlock();
      setState(198); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PancasilaScriptLangParser::T__4)
      | (1ULL << PancasilaScriptLangParser::WHILE)
      | (1ULL << PancasilaScriptLangParser::INT)
      | (1ULL << PancasilaScriptLangParser::FLOAT)
      | (1ULL << PancasilaScriptLangParser::IF)
      | (1ULL << PancasilaScriptLangParser::FALSE)
      | (1ULL << PancasilaScriptLangParser::TRUE)
      | (1ULL << PancasilaScriptLangParser::MIN)
      | (1ULL << PancasilaScriptLangParser::ID))) != 0));
    setState(200);
    match(PancasilaScriptLangParser::T__14);
    setState(215);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PancasilaScriptLangParser::ELSEIF) {
      setState(201);
      match(PancasilaScriptLangParser::ELSEIF);
      setState(202);
      match(PancasilaScriptLangParser::T__4);
      setState(203);
      exprBool();
      setState(204);
      match(PancasilaScriptLangParser::T__5);
      setState(205);
      match(PancasilaScriptLangParser::T__13);
      setState(207); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(206);
        exprScopeBlock();
        setState(209); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PancasilaScriptLangParser::T__4)
        | (1ULL << PancasilaScriptLangParser::WHILE)
        | (1ULL << PancasilaScriptLangParser::INT)
        | (1ULL << PancasilaScriptLangParser::FLOAT)
        | (1ULL << PancasilaScriptLangParser::IF)
        | (1ULL << PancasilaScriptLangParser::FALSE)
        | (1ULL << PancasilaScriptLangParser::TRUE)
        | (1ULL << PancasilaScriptLangParser::MIN)
        | (1ULL << PancasilaScriptLangParser::ID))) != 0));
      setState(211);
      match(PancasilaScriptLangParser::T__14);
      setState(217);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PancasilaScriptLangParser::ELSE) {
      setState(218);
      match(PancasilaScriptLangParser::ELSE);
      setState(219);
      match(PancasilaScriptLangParser::T__13);
      setState(221); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(220);
        exprScopeBlock();
        setState(223); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PancasilaScriptLangParser::T__4)
        | (1ULL << PancasilaScriptLangParser::WHILE)
        | (1ULL << PancasilaScriptLangParser::INT)
        | (1ULL << PancasilaScriptLangParser::FLOAT)
        | (1ULL << PancasilaScriptLangParser::IF)
        | (1ULL << PancasilaScriptLangParser::FALSE)
        | (1ULL << PancasilaScriptLangParser::TRUE)
        | (1ULL << PancasilaScriptLangParser::MIN)
        | (1ULL << PancasilaScriptLangParser::ID))) != 0));
      setState(225);
      match(PancasilaScriptLangParser::T__14);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileExprContext ------------------------------------------------------------------

PancasilaScriptLangParser::WhileExprContext::WhileExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PancasilaScriptLangParser::WhileExprContext::WHILE() {
  return getToken(PancasilaScriptLangParser::WHILE, 0);
}

PancasilaScriptLangParser::ExprBoolContext* PancasilaScriptLangParser::WhileExprContext::exprBool() {
  return getRuleContext<PancasilaScriptLangParser::ExprBoolContext>(0);
}

std::vector<PancasilaScriptLangParser::ExprScopeBlockContext *> PancasilaScriptLangParser::WhileExprContext::exprScopeBlock() {
  return getRuleContexts<PancasilaScriptLangParser::ExprScopeBlockContext>();
}

PancasilaScriptLangParser::ExprScopeBlockContext* PancasilaScriptLangParser::WhileExprContext::exprScopeBlock(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::ExprScopeBlockContext>(i);
}


size_t PancasilaScriptLangParser::WhileExprContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleWhileExpr;
}

void PancasilaScriptLangParser::WhileExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileExpr(this);
}

void PancasilaScriptLangParser::WhileExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileExpr(this);
}


antlrcpp::Any PancasilaScriptLangParser::WhileExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitWhileExpr(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::WhileExprContext* PancasilaScriptLangParser::whileExpr() {
  WhileExprContext *_localctx = _tracker.createInstance<WhileExprContext>(_ctx, getState());
  enterRule(_localctx, 22, PancasilaScriptLangParser::RuleWhileExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(PancasilaScriptLangParser::WHILE);
    setState(230);
    match(PancasilaScriptLangParser::T__4);
    setState(231);
    exprBool();
    setState(232);
    match(PancasilaScriptLangParser::T__5);
    setState(233);
    match(PancasilaScriptLangParser::T__13);
    setState(235); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(234);
      exprScopeBlock();
      setState(237); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PancasilaScriptLangParser::T__4)
      | (1ULL << PancasilaScriptLangParser::WHILE)
      | (1ULL << PancasilaScriptLangParser::INT)
      | (1ULL << PancasilaScriptLangParser::FLOAT)
      | (1ULL << PancasilaScriptLangParser::IF)
      | (1ULL << PancasilaScriptLangParser::FALSE)
      | (1ULL << PancasilaScriptLangParser::TRUE)
      | (1ULL << PancasilaScriptLangParser::MIN)
      | (1ULL << PancasilaScriptLangParser::ID))) != 0));
    setState(239);
    match(PancasilaScriptLangParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncArgsDefContext ------------------------------------------------------------------

PancasilaScriptLangParser::FuncArgsDefContext::FuncArgsDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PancasilaScriptLangParser::FuncArgsDefContext::ID() {
  return getTokens(PancasilaScriptLangParser::ID);
}

tree::TerminalNode* PancasilaScriptLangParser::FuncArgsDefContext::ID(size_t i) {
  return getToken(PancasilaScriptLangParser::ID, i);
}


size_t PancasilaScriptLangParser::FuncArgsDefContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleFuncArgsDef;
}

void PancasilaScriptLangParser::FuncArgsDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncArgsDef(this);
}

void PancasilaScriptLangParser::FuncArgsDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncArgsDef(this);
}


antlrcpp::Any PancasilaScriptLangParser::FuncArgsDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitFuncArgsDef(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::FuncArgsDefContext* PancasilaScriptLangParser::funcArgsDef() {
  FuncArgsDefContext *_localctx = _tracker.createInstance<FuncArgsDefContext>(_ctx, getState());
  enterRule(_localctx, 24, PancasilaScriptLangParser::RuleFuncArgsDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(PancasilaScriptLangParser::ID);
    setState(246);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PancasilaScriptLangParser::T__11) {
      setState(242);
      match(PancasilaScriptLangParser::T__11);
      setState(243);
      match(PancasilaScriptLangParser::ID);
      setState(248);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncExprContext ------------------------------------------------------------------

PancasilaScriptLangParser::FuncExprContext::FuncExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::FuncExprContext::expr() {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(0);
}

PancasilaScriptLangParser::InitNDimArrayContext* PancasilaScriptLangParser::FuncExprContext::initNDimArray() {
  return getRuleContext<PancasilaScriptLangParser::InitNDimArrayContext>(0);
}

PancasilaScriptLangParser::AssignContext* PancasilaScriptLangParser::FuncExprContext::assign() {
  return getRuleContext<PancasilaScriptLangParser::AssignContext>(0);
}

PancasilaScriptLangParser::IfExprContext* PancasilaScriptLangParser::FuncExprContext::ifExpr() {
  return getRuleContext<PancasilaScriptLangParser::IfExprContext>(0);
}


size_t PancasilaScriptLangParser::FuncExprContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleFuncExpr;
}

void PancasilaScriptLangParser::FuncExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncExpr(this);
}

void PancasilaScriptLangParser::FuncExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncExpr(this);
}


antlrcpp::Any PancasilaScriptLangParser::FuncExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitFuncExpr(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::FuncExprContext* PancasilaScriptLangParser::funcExpr() {
  FuncExprContext *_localctx = _tracker.createInstance<FuncExprContext>(_ctx, getState());
  enterRule(_localctx, 26, PancasilaScriptLangParser::RuleFuncExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(259);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(249);
      expr(0);
      setState(250);
      match(PancasilaScriptLangParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(252);
      initNDimArray();
      setState(253);
      match(PancasilaScriptLangParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(255);
      assign();
      setState(256);
      match(PancasilaScriptLangParser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(258);
      ifExpr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncRetContext ------------------------------------------------------------------

PancasilaScriptLangParser::FuncRetContext::FuncRetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PancasilaScriptLangParser::FuncRetContext::FNRET() {
  return getToken(PancasilaScriptLangParser::FNRET, 0);
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::FuncRetContext::expr() {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(0);
}

PancasilaScriptLangParser::ArrayExprsContext* PancasilaScriptLangParser::FuncRetContext::arrayExprs() {
  return getRuleContext<PancasilaScriptLangParser::ArrayExprsContext>(0);
}


size_t PancasilaScriptLangParser::FuncRetContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleFuncRet;
}

void PancasilaScriptLangParser::FuncRetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncRet(this);
}

void PancasilaScriptLangParser::FuncRetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncRet(this);
}


antlrcpp::Any PancasilaScriptLangParser::FuncRetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitFuncRet(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::FuncRetContext* PancasilaScriptLangParser::funcRet() {
  FuncRetContext *_localctx = _tracker.createInstance<FuncRetContext>(_ctx, getState());
  enterRule(_localctx, 28, PancasilaScriptLangParser::RuleFuncRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(266);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PancasilaScriptLangParser::FNRET: {
        enterOuterAlt(_localctx, 1);
        setState(261);
        match(PancasilaScriptLangParser::FNRET);
        setState(262);
        expr(0);
        setState(263);
        match(PancasilaScriptLangParser::T__0);
        break;
      }

      case PancasilaScriptLangParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(265);
        arrayExprs();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

PancasilaScriptLangParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PancasilaScriptLangParser::FuncDefContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleFuncDef;
}

void PancasilaScriptLangParser::FuncDefContext::copyFrom(FuncDefContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- HandleDeclareFunctionWithArgsContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::FNFUNC() {
  return getToken(PancasilaScriptLangParser::FNFUNC, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

PancasilaScriptLangParser::FuncArgsDefContext* PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::funcArgsDef() {
  return getRuleContext<PancasilaScriptLangParser::FuncArgsDefContext>(0);
}

std::vector<PancasilaScriptLangParser::FuncExprContext *> PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::funcExpr() {
  return getRuleContexts<PancasilaScriptLangParser::FuncExprContext>();
}

PancasilaScriptLangParser::FuncExprContext* PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::funcExpr(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::FuncExprContext>(i);
}

PancasilaScriptLangParser::FuncRetContext* PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::funcRet() {
  return getRuleContext<PancasilaScriptLangParser::FuncRetContext>(0);
}

PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::HandleDeclareFunctionWithArgsContext(FuncDefContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleDeclareFunctionWithArgs(this);
}
void PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleDeclareFunctionWithArgs(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleDeclareFunctionWithArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HandleDeclareFunctionWithoutArgsContext ------------------------------------------------------------------

tree::TerminalNode* PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext::FNFUNC() {
  return getToken(PancasilaScriptLangParser::FNFUNC, 0);
}

tree::TerminalNode* PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

std::vector<PancasilaScriptLangParser::FuncExprContext *> PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext::funcExpr() {
  return getRuleContexts<PancasilaScriptLangParser::FuncExprContext>();
}

PancasilaScriptLangParser::FuncExprContext* PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext::funcExpr(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::FuncExprContext>(i);
}

PancasilaScriptLangParser::FuncRetContext* PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext::funcRet() {
  return getRuleContext<PancasilaScriptLangParser::FuncRetContext>(0);
}

PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext::HandleDeclareFunctionWithoutArgsContext(FuncDefContext *ctx) { copyFrom(ctx); }

void PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandleDeclareFunctionWithoutArgs(this);
}
void PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandleDeclareFunctionWithoutArgs(this);
}

antlrcpp::Any PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitHandleDeclareFunctionWithoutArgs(this);
  else
    return visitor->visitChildren(this);
}
PancasilaScriptLangParser::FuncDefContext* PancasilaScriptLangParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 30, PancasilaScriptLangParser::RuleFuncDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FuncDefContext *>(_tracker.createInstance<PancasilaScriptLangParser::HandleDeclareFunctionWithArgsContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(268);
      match(PancasilaScriptLangParser::FNFUNC);
      setState(269);
      match(PancasilaScriptLangParser::ID);
      setState(270);
      match(PancasilaScriptLangParser::T__4);
      setState(271);
      funcArgsDef();
      setState(272);
      match(PancasilaScriptLangParser::T__5);
      setState(273);
      match(PancasilaScriptLangParser::T__13);
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PancasilaScriptLangParser::T__4)
        | (1ULL << PancasilaScriptLangParser::INT)
        | (1ULL << PancasilaScriptLangParser::FLOAT)
        | (1ULL << PancasilaScriptLangParser::IF)
        | (1ULL << PancasilaScriptLangParser::FALSE)
        | (1ULL << PancasilaScriptLangParser::TRUE)
        | (1ULL << PancasilaScriptLangParser::MIN)
        | (1ULL << PancasilaScriptLangParser::ID))) != 0)) {
        setState(274);
        funcExpr();
        setState(279);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(281);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PancasilaScriptLangParser::T__10

      || _la == PancasilaScriptLangParser::FNRET) {
        setState(280);
        funcRet();
      }
      setState(283);
      match(PancasilaScriptLangParser::T__14);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FuncDefContext *>(_tracker.createInstance<PancasilaScriptLangParser::HandleDeclareFunctionWithoutArgsContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(285);
      match(PancasilaScriptLangParser::FNFUNC);
      setState(286);
      match(PancasilaScriptLangParser::ID);
      setState(287);
      match(PancasilaScriptLangParser::T__4);
      setState(288);
      match(PancasilaScriptLangParser::T__5);
      setState(289);
      match(PancasilaScriptLangParser::T__13);
      setState(293);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PancasilaScriptLangParser::T__4)
        | (1ULL << PancasilaScriptLangParser::INT)
        | (1ULL << PancasilaScriptLangParser::FLOAT)
        | (1ULL << PancasilaScriptLangParser::IF)
        | (1ULL << PancasilaScriptLangParser::FALSE)
        | (1ULL << PancasilaScriptLangParser::TRUE)
        | (1ULL << PancasilaScriptLangParser::MIN)
        | (1ULL << PancasilaScriptLangParser::ID))) != 0)) {
        setState(290);
        funcExpr();
        setState(295);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(297);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PancasilaScriptLangParser::T__10

      || _la == PancasilaScriptLangParser::FNRET) {
        setState(296);
        funcRet();
      }
      setState(299);
      match(PancasilaScriptLangParser::T__14);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncArgsContext ------------------------------------------------------------------

PancasilaScriptLangParser::FuncArgsContext::FuncArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PancasilaScriptLangParser::ExprContext *> PancasilaScriptLangParser::FuncArgsContext::expr() {
  return getRuleContexts<PancasilaScriptLangParser::ExprContext>();
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::FuncArgsContext::expr(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(i);
}


size_t PancasilaScriptLangParser::FuncArgsContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleFuncArgs;
}

void PancasilaScriptLangParser::FuncArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncArgs(this);
}

void PancasilaScriptLangParser::FuncArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncArgs(this);
}


antlrcpp::Any PancasilaScriptLangParser::FuncArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitFuncArgs(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::FuncArgsContext* PancasilaScriptLangParser::funcArgs() {
  FuncArgsContext *_localctx = _tracker.createInstance<FuncArgsContext>(_ctx, getState());
  enterRule(_localctx, 32, PancasilaScriptLangParser::RuleFuncArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    expr(0);
    setState(307);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PancasilaScriptLangParser::T__11) {
      setState(303);
      match(PancasilaScriptLangParser::T__11);
      setState(304);
      expr(0);
      setState(309);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCommandContext ------------------------------------------------------------------

PancasilaScriptLangParser::FuncCommandContext::FuncCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PancasilaScriptLangParser::FuncCommandContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

PancasilaScriptLangParser::FuncArgsContext* PancasilaScriptLangParser::FuncCommandContext::funcArgs() {
  return getRuleContext<PancasilaScriptLangParser::FuncArgsContext>(0);
}


size_t PancasilaScriptLangParser::FuncCommandContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleFuncCommand;
}

void PancasilaScriptLangParser::FuncCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCommand(this);
}

void PancasilaScriptLangParser::FuncCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCommand(this);
}


antlrcpp::Any PancasilaScriptLangParser::FuncCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitFuncCommand(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::FuncCommandContext* PancasilaScriptLangParser::funcCommand() {
  FuncCommandContext *_localctx = _tracker.createInstance<FuncCommandContext>(_ctx, getState());
  enterRule(_localctx, 34, PancasilaScriptLangParser::RuleFuncCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    match(PancasilaScriptLangParser::ID);
    setState(311);
    match(PancasilaScriptLangParser::T__4);
    setState(312);
    funcArgs();
    setState(313);
    match(PancasilaScriptLangParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdMemberFuncPropretyContext ------------------------------------------------------------------

PancasilaScriptLangParser::IdMemberFuncPropretyContext::IdMemberFuncPropretyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PancasilaScriptLangParser::IdMemberFuncPropretyContext::ID() {
  return getTokens(PancasilaScriptLangParser::ID);
}

tree::TerminalNode* PancasilaScriptLangParser::IdMemberFuncPropretyContext::ID(size_t i) {
  return getToken(PancasilaScriptLangParser::ID, i);
}

std::vector<PancasilaScriptLangParser::ExprContext *> PancasilaScriptLangParser::IdMemberFuncPropretyContext::expr() {
  return getRuleContexts<PancasilaScriptLangParser::ExprContext>();
}

PancasilaScriptLangParser::ExprContext* PancasilaScriptLangParser::IdMemberFuncPropretyContext::expr(size_t i) {
  return getRuleContext<PancasilaScriptLangParser::ExprContext>(i);
}


size_t PancasilaScriptLangParser::IdMemberFuncPropretyContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleIdMemberFuncProprety;
}

void PancasilaScriptLangParser::IdMemberFuncPropretyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdMemberFuncProprety(this);
}

void PancasilaScriptLangParser::IdMemberFuncPropretyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdMemberFuncProprety(this);
}


antlrcpp::Any PancasilaScriptLangParser::IdMemberFuncPropretyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitIdMemberFuncProprety(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::IdMemberFuncPropretyContext* PancasilaScriptLangParser::idMemberFuncProprety() {
  IdMemberFuncPropretyContext *_localctx = _tracker.createInstance<IdMemberFuncPropretyContext>(_ctx, getState());
  enterRule(_localctx, 36, PancasilaScriptLangParser::RuleIdMemberFuncProprety);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    match(PancasilaScriptLangParser::ID);
    setState(316);
    match(PancasilaScriptLangParser::T__15);
    setState(317);
    match(PancasilaScriptLangParser::ID);
    setState(318);
    match(PancasilaScriptLangParser::T__4);
    setState(319);
    expr(0);
    setState(324);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PancasilaScriptLangParser::T__11) {
      setState(320);
      match(PancasilaScriptLangParser::T__11);
      setState(321);
      expr(0);
      setState(326);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(327);
    match(PancasilaScriptLangParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitNDimArrayContext ------------------------------------------------------------------

PancasilaScriptLangParser::InitNDimArrayContext::InitNDimArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PancasilaScriptLangParser::InitNDimArrayContext::ID() {
  return getToken(PancasilaScriptLangParser::ID, 0);
}

std::vector<tree::TerminalNode *> PancasilaScriptLangParser::InitNDimArrayContext::TANDANDIMARRAYINIT() {
  return getTokens(PancasilaScriptLangParser::TANDANDIMARRAYINIT);
}

tree::TerminalNode* PancasilaScriptLangParser::InitNDimArrayContext::TANDANDIMARRAYINIT(size_t i) {
  return getToken(PancasilaScriptLangParser::TANDANDIMARRAYINIT, i);
}


size_t PancasilaScriptLangParser::InitNDimArrayContext::getRuleIndex() const {
  return PancasilaScriptLangParser::RuleInitNDimArray;
}

void PancasilaScriptLangParser::InitNDimArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitNDimArray(this);
}

void PancasilaScriptLangParser::InitNDimArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PancasilaScriptLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitNDimArray(this);
}


antlrcpp::Any PancasilaScriptLangParser::InitNDimArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PancasilaScriptLangVisitor*>(visitor))
    return parserVisitor->visitInitNDimArray(this);
  else
    return visitor->visitChildren(this);
}

PancasilaScriptLangParser::InitNDimArrayContext* PancasilaScriptLangParser::initNDimArray() {
  InitNDimArrayContext *_localctx = _tracker.createInstance<InitNDimArrayContext>(_ctx, getState());
  enterRule(_localctx, 38, PancasilaScriptLangParser::RuleInitNDimArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    match(PancasilaScriptLangParser::ID);
    setState(330);
    match(PancasilaScriptLangParser::TANDANDIMARRAYINIT);
    setState(334);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PancasilaScriptLangParser::TANDANDIMARRAYINIT) {
      setState(331);
      match(PancasilaScriptLangParser::TANDANDIMARRAYINIT);
      setState(336);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool PancasilaScriptLangParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PancasilaScriptLangParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> PancasilaScriptLangParser::_decisionToDFA;
atn::PredictionContextCache PancasilaScriptLangParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PancasilaScriptLangParser::_atn;
std::vector<uint16_t> PancasilaScriptLangParser::_serializedATN;

std::vector<std::string> PancasilaScriptLangParser::_ruleNames = {
  "prog", "stat", "exprList", "expr", "assign", "exprBool", "arrayExprs", 
  "boolType", "exprLine", "exprScopeBlock", "ifExpr", "whileExpr", "funcArgsDef", 
  "funcExpr", "funcRet", "funcDef", "funcArgs", "funcCommand", "idMemberFuncProprety", 
  "initNDimArray"
};

std::vector<std::string> PancasilaScriptLangParser::_literalNames = {
  "", "';'", "'*'", "'/'", "'+'", "'('", "')'", "'+='", "'-='", "'*='", 
  "'/='", "'['", "','", "']'", "'{'", "'}'", "'.'", "'[]'", "", "", "", 
  "", "", "", "", "", "", "", "'='", "'!='", "'>'", "'<'", "'>='", "'<='", 
  "'-'"
};

std::vector<std::string> PancasilaScriptLangParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "TANDANDIMARRAYINIT", 
  "WHILE", "FNFUNC", "FNRET", "INT", "FLOAT", "IF", "ELSEIF", "ELSE", "FALSE", 
  "TRUE", "EQ", "NOTEQ", "GR", "LT", "GREQ", "LTEQ", "MIN", "ID", "WS"
};

dfa::Vocabulary PancasilaScriptLangParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PancasilaScriptLangParser::_tokenNames;

PancasilaScriptLangParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x26, 0x154, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x6, 0x2, 0x2c, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x2d, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3c, 0xa, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x43, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x46, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x4a, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x4e, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x52, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x59, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x60, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x68, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x6b, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x7f, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x9a, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0xa0, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xa3, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x5, 0x9, 0xa8, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0xaf, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0xba, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xbf, 0xa, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 
    0xc7, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0xc8, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0xd2, 0xa, 0xc, 0xd, 
    0xc, 0xe, 0xc, 0xd3, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xd8, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0xdb, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 
    0xe0, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0xe1, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0xe6, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x6, 0xd, 0xee, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xef, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xf7, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0xfa, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x106, 
    0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0x10d, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x116, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x119, 0xb, 0x11, 0x3, 0x11, 0x5, 0x11, 0x11c, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x7, 0x11, 0x126, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 
    0x129, 0xb, 0x11, 0x3, 0x11, 0x5, 0x11, 0x12c, 0xa, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x12f, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 
    0x134, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x137, 0xb, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x145, 
    0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x148, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x14f, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x152, 0xb, 0x15, 0x3, 0x15, 0x2, 0x3, 0x8, 0x16, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x4, 0x3, 0x2, 0x4, 0x5, 0x4, 0x2, 
    0x6, 0x6, 0x24, 0x24, 0x2, 0x17b, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x7e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x10, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x14, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x105, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x138, 0x3, 0x2, 0x2, 0x2, 0x26, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x4, 0x3, 
    0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x2, 0x2, 0x3, 0x30, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x3c, 0x5, 0x6, 0x4, 0x2, 0x32, 0x33, 0x5, 
    0xa, 0x6, 0x2, 0x33, 0x34, 0x7, 0x3, 0x2, 0x2, 0x34, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x35, 0x36, 0x5, 0x28, 0x15, 0x2, 0x36, 0x37, 0x7, 0x3, 0x2, 
    0x2, 0x37, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3c, 0x5, 0x16, 0xc, 0x2, 
    0x39, 0x3c, 0x5, 0x20, 0x11, 0x2, 0x3a, 0x3c, 0x5, 0x18, 0xd, 0x2, 0x3b, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x32, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x3b, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3e, 0x5, 0x8, 0x5, 0x2, 0x3e, 0x44, 0x7, 0x3, 0x2, 
    0x2, 0x3f, 0x40, 0x5, 0x8, 0x5, 0x2, 0x40, 0x41, 0x7, 0x3, 0x2, 0x2, 
    0x41, 0x43, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x7, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x49, 0x8, 0x5, 0x1, 0x2, 0x48, 0x4a, 0x7, 0x24, 
    0x2, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x60, 0x7, 0x17, 0x2, 0x2, 
    0x4c, 0x4e, 0x7, 0x24, 0x2, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x60, 
    0x7, 0x18, 0x2, 0x2, 0x50, 0x52, 0x7, 0x24, 0x2, 0x2, 0x51, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0x60, 0x5, 0x24, 0x13, 0x2, 0x54, 0x60, 0x7, 0x1d, 0x2, 
    0x2, 0x55, 0x60, 0x7, 0x1c, 0x2, 0x2, 0x56, 0x60, 0x5, 0x26, 0x14, 0x2, 
    0x57, 0x59, 0x7, 0x24, 0x2, 0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x60, 
    0x7, 0x25, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x7, 0x2, 0x2, 0x5c, 0x5d, 0x5, 
    0x8, 0x5, 0x2, 0x5d, 0x5e, 0x7, 0x8, 0x2, 0x2, 0x5e, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x47, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x51, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0xc, 0xc, 0x2, 0x2, 0x62, 0x63, 0x9, 
    0x2, 0x2, 0x2, 0x63, 0x68, 0x5, 0x8, 0x5, 0xd, 0x64, 0x65, 0xc, 0xb, 
    0x2, 0x2, 0x65, 0x66, 0x9, 0x3, 0x2, 0x2, 0x66, 0x68, 0x5, 0x8, 0x5, 
    0xc, 0x67, 0x61, 0x3, 0x2, 0x2, 0x2, 0x67, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x25, 0x2, 0x2, 0x6d, 0x6e, 0x7, 
    0x1e, 0x2, 0x2, 0x6e, 0x7f, 0x5, 0x8, 0x5, 0x2, 0x6f, 0x70, 0x7, 0x25, 
    0x2, 0x2, 0x70, 0x71, 0x7, 0x1e, 0x2, 0x2, 0x71, 0x7f, 0x5, 0xe, 0x8, 
    0x2, 0x72, 0x73, 0x7, 0x25, 0x2, 0x2, 0x73, 0x74, 0x7, 0x9, 0x2, 0x2, 
    0x74, 0x7f, 0x5, 0x8, 0x5, 0x2, 0x75, 0x76, 0x7, 0x25, 0x2, 0x2, 0x76, 
    0x77, 0x7, 0xa, 0x2, 0x2, 0x77, 0x7f, 0x5, 0x8, 0x5, 0x2, 0x78, 0x79, 
    0x7, 0x25, 0x2, 0x2, 0x79, 0x7a, 0x7, 0xb, 0x2, 0x2, 0x7a, 0x7f, 0x5, 
    0x8, 0x5, 0x2, 0x7b, 0x7c, 0x7, 0x25, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0xc, 
    0x2, 0x2, 0x7d, 0x7f, 0x5, 0x8, 0x5, 0x2, 0x7e, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x75, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x7f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x80, 0x9a, 
    0x5, 0x10, 0x9, 0x2, 0x81, 0x82, 0x5, 0x10, 0x9, 0x2, 0x82, 0x83, 0x7, 
    0x1e, 0x2, 0x2, 0x83, 0x84, 0x5, 0x10, 0x9, 0x2, 0x84, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x85, 0x86, 0x5, 0x10, 0x9, 0x2, 0x86, 0x87, 0x7, 0x1f, 0x2, 
    0x2, 0x87, 0x88, 0x5, 0x10, 0x9, 0x2, 0x88, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x8a, 0x5, 0x10, 0x9, 0x2, 0x8a, 0x8b, 0x7, 0x20, 0x2, 0x2, 0x8b, 
    0x8c, 0x5, 0x10, 0x9, 0x2, 0x8c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 
    0x5, 0x10, 0x9, 0x2, 0x8e, 0x8f, 0x7, 0x21, 0x2, 0x2, 0x8f, 0x90, 0x5, 
    0x10, 0x9, 0x2, 0x90, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x5, 0x10, 
    0x9, 0x2, 0x92, 0x93, 0x7, 0x22, 0x2, 0x2, 0x93, 0x94, 0x5, 0x10, 0x9, 
    0x2, 0x94, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x5, 0x10, 0x9, 0x2, 
    0x96, 0x97, 0x7, 0x23, 0x2, 0x2, 0x97, 0x98, 0x5, 0x10, 0x9, 0x2, 0x98, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x99, 0x80, 0x3, 0x2, 0x2, 0x2, 0x99, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x85, 0x3, 0x2, 0x2, 0x2, 0x99, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x99, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x95, 0x3, 0x2, 0x2, 0x2, 0x9a, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x9b, 0x9c, 0x7, 0xd, 0x2, 0x2, 0x9c, 0xa1, 0x5, 0x8, 0x5, 0x2, 
    0x9d, 0x9e, 0x7, 0xe, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0x8, 0x5, 0x2, 0x9f, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0xf, 
    0x2, 0x2, 0xa5, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x7, 0x24, 0x2, 
    0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaf, 0x7, 0x17, 0x2, 0x2, 0xaa, 
    0xaf, 0x5, 0x24, 0x13, 0x2, 0xab, 0xaf, 0x7, 0x1d, 0x2, 0x2, 0xac, 0xaf, 
    0x7, 0x1c, 0x2, 0x2, 0xad, 0xaf, 0x7, 0x25, 0x2, 0x2, 0xae, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xae, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0x11, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x8, 0x5, 0x2, 
    0xb1, 0xb2, 0x7, 0x3, 0x2, 0x2, 0xb2, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xb4, 0x5, 0x28, 0x15, 0x2, 0xb4, 0xb5, 0x7, 0x3, 0x2, 0x2, 0xb5, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0xa, 0x6, 0x2, 0xb7, 0xb8, 0x7, 
    0x3, 0x2, 0x2, 0xb8, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb0, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0xba, 0x13, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbf, 0x5, 0x18, 0xd, 0x2, 
    0xbc, 0xbf, 0x5, 0x12, 0xa, 0x2, 0xbd, 0xbf, 0x5, 0x16, 0xc, 0x2, 0xbe, 
    0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0x15, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 
    0x19, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x7, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0xc, 
    0x7, 0x2, 0xc3, 0xc4, 0x7, 0x8, 0x2, 0x2, 0xc4, 0xc6, 0x7, 0x10, 0x2, 
    0x2, 0xc5, 0xc7, 0x5, 0x14, 0xb, 0x2, 0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xd9, 
    0x7, 0x11, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x1a, 0x2, 0x2, 0xcc, 0xcd, 0x7, 
    0x7, 0x2, 0x2, 0xcd, 0xce, 0x5, 0xc, 0x7, 0x2, 0xce, 0xcf, 0x7, 0x8, 
    0x2, 0x2, 0xcf, 0xd1, 0x7, 0x10, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x14, 0xb, 
    0x2, 0xd1, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x11, 0x2, 0x2, 0xd6, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0xd7, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xdd, 0x7, 0x1b, 0x2, 0x2, 0xdd, 0xdf, 0x7, 0x10, 0x2, 0x2, 
    0xde, 0xe0, 0x5, 0x14, 0xb, 0x2, 0xdf, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 
    0x11, 0x2, 0x2, 0xe4, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xe8, 0x7, 0x14, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x7, 0x2, 0x2, 
    0xe9, 0xea, 0x5, 0xc, 0x7, 0x2, 0xea, 0xeb, 0x7, 0x8, 0x2, 0x2, 0xeb, 
    0xed, 0x7, 0x10, 0x2, 0x2, 0xec, 0xee, 0x5, 0x14, 0xb, 0x2, 0xed, 0xec, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0xf1, 0xf2, 0x7, 0x11, 0x2, 0x2, 0xf2, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf8, 0x7, 0x25, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0xe, 0x2, 0x2, 
    0xf5, 0xf7, 0x7, 0x25, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xfc, 0x5, 0x8, 0x5, 0x2, 0xfc, 0xfd, 0x7, 0x3, 
    0x2, 0x2, 0xfd, 0x106, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x28, 0x15, 
    0x2, 0xff, 0x100, 0x7, 0x3, 0x2, 0x2, 0x100, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0x102, 0x5, 0xa, 0x6, 0x2, 0x102, 0x103, 0x7, 0x3, 0x2, 0x2, 
    0x103, 0x106, 0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x5, 0x16, 0xc, 0x2, 
    0x105, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x105, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x105, 
    0x101, 0x3, 0x2, 0x2, 0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x16, 0x2, 0x2, 0x108, 
    0x109, 0x5, 0x8, 0x5, 0x2, 0x109, 0x10a, 0x7, 0x3, 0x2, 0x2, 0x10a, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10d, 0x5, 0xe, 0x8, 0x2, 0x10c, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x7, 0x15, 0x2, 0x2, 0x10f, 
    0x110, 0x7, 0x25, 0x2, 0x2, 0x110, 0x111, 0x7, 0x7, 0x2, 0x2, 0x111, 
    0x112, 0x5, 0x1a, 0xe, 0x2, 0x112, 0x113, 0x7, 0x8, 0x2, 0x2, 0x113, 
    0x117, 0x7, 0x10, 0x2, 0x2, 0x114, 0x116, 0x5, 0x1c, 0xf, 0x2, 0x115, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x11c, 0x5, 0x1e, 0x10, 0x2, 0x11b, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11b, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x11e, 0x7, 0x11, 0x2, 0x2, 0x11e, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x11f, 
    0x120, 0x7, 0x15, 0x2, 0x2, 0x120, 0x121, 0x7, 0x25, 0x2, 0x2, 0x121, 
    0x122, 0x7, 0x7, 0x2, 0x2, 0x122, 0x123, 0x7, 0x8, 0x2, 0x2, 0x123, 
    0x127, 0x7, 0x10, 0x2, 0x2, 0x124, 0x126, 0x5, 0x1c, 0xf, 0x2, 0x125, 
    0x124, 0x3, 0x2, 0x2, 0x2, 0x126, 0x129, 0x3, 0x2, 0x2, 0x2, 0x127, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x12c, 0x5, 0x1e, 0x10, 0x2, 0x12b, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0x12f, 0x7, 0x11, 0x2, 0x2, 0x12e, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x21, 0x3, 0x2, 0x2, 0x2, 0x130, 0x135, 
    0x5, 0x8, 0x5, 0x2, 0x131, 0x132, 0x7, 0xe, 0x2, 0x2, 0x132, 0x134, 
    0x5, 0x8, 0x5, 0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x134, 0x137, 
    0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x23, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x138, 0x139, 0x7, 0x25, 0x2, 0x2, 0x139, 0x13a, 0x7, 
    0x7, 0x2, 0x2, 0x13a, 0x13b, 0x5, 0x22, 0x12, 0x2, 0x13b, 0x13c, 0x7, 
    0x8, 0x2, 0x2, 0x13c, 0x25, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x7, 0x25, 
    0x2, 0x2, 0x13e, 0x13f, 0x7, 0x12, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x25, 
    0x2, 0x2, 0x140, 0x141, 0x7, 0x7, 0x2, 0x2, 0x141, 0x146, 0x5, 0x8, 
    0x5, 0x2, 0x142, 0x143, 0x7, 0xe, 0x2, 0x2, 0x143, 0x145, 0x5, 0x8, 
    0x5, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x145, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x146, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x147, 0x149, 0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x149, 0x14a, 0x7, 0x8, 0x2, 0x2, 0x14a, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x14b, 0x14c, 0x7, 0x25, 0x2, 0x2, 0x14c, 0x150, 0x7, 0x13, 0x2, 
    0x2, 0x14d, 0x14f, 0x7, 0x13, 0x2, 0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x152, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 
    0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x24, 0x2d, 0x3b, 0x44, 0x49, 0x4d, 
    0x51, 0x58, 0x5f, 0x67, 0x69, 0x7e, 0x99, 0xa1, 0xa7, 0xae, 0xb9, 0xbe, 
    0xc8, 0xd3, 0xd9, 0xe1, 0xe5, 0xef, 0xf8, 0x105, 0x10c, 0x117, 0x11b, 
    0x127, 0x12b, 0x12e, 0x135, 0x146, 0x150, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PancasilaScriptLangParser::Initializer PancasilaScriptLangParser::_init;
