
// Generated from D:/masteraplikasi/stuff/projectall/rilis/PancasilaScriptLang/PancasilaScriptLang.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace PancasilaScriptLang {


class  PancasilaScriptLangLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, TANDANDIMARRAYINIT = 17, WHILE = 18, FNFUNC = 19, 
    FNRET = 20, INT = 21, FLOAT = 22, IF = 23, ELSEIF = 24, ELSE = 25, FALSE = 26, 
    TRUE = 27, EQ = 28, NOTEQ = 29, GR = 30, LT = 31, GREQ = 32, LTEQ = 33, 
    MIN = 34, ID = 35, WS = 36
  };

  PancasilaScriptLangLexer(antlr4::CharStream *input);
  ~PancasilaScriptLangLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace PancasilaScriptLang
