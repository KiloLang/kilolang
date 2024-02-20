// Implementation from Lexer.hpp
#include <Kilo/Lexer.hpp>

Kilo::LexResult Kilo::Lexer::lex()
{
    Kilo::LexResult result;
    std::vector<Kilo::Token*> tokens = this->makeTokens();
}

void Kilo::Lexer::setDebugStatus(bool p_status)
{
    this->debugStatus = p_status; 
}

bool Kilo::Lexer::getDebugStatus() const 
{
    return this->debugStatus;
}

void Kilo::Lexer::setupKeywords()
{
    this->keywords.push_back("func");
    this->keywords.push_back("return");
    // Types
    this->keywords.push_back("int"); 
}