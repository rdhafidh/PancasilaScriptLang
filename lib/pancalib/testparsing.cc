#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>
#include <PancasilaScriptLangLexer.h>
#include <PancasilaScriptLangParser.h>
#include <parsererrorlistener.h>
#include <testparsing.h>
#include <tree/ParseTree.h>

TestParsing::TestParsing() {}
TestParsing::~TestParsing() {}

ParseTestingResult TestParsing::testParsing(const std::string &buffer) {
  ParseTestingResult pr;
  pr.treeOut = nullptr;
  antlr4::ANTLRInputStream input(buffer);
  PancasilaScriptLang::PancasilaScriptLangLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  PancasilaScriptLang::PancasilaScriptLangParser parser(&tokens);
  ParserErrorListener pel;
  parser.addErrorListener(&pel);
  try {
    parser.setBuildParseTree(true);
    tokens.fill();
    antlr4::tree::ParseTree *tree = parser.prog();
    pr.treeOut = tree;
    pr.is_ok_parsing = true;
  } catch (std::exception &e) {
    pr.is_ok_parsing = false;
    pr.error_msg = e.what();
  }
  return pr;
}
