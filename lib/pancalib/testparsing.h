#ifndef TESTPARSING_H
#define TESTPARSING_H

#include <iostream>
namespace antlr4{
	namespace tree{
			class ParseTree;
	}
}

struct ParseTestingResult{
	antlr4::tree::ParseTree *treeOut;
	bool is_ok_parsing;
	std::string error_msg;
};

class TestParsing{
	
public:
	explicit TestParsing();
	~TestParsing();
	
	ParseTestingResult testParsing(const std::string &buffer);
	
};

#endif TESTPARSING_H