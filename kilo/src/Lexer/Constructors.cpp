// Implementation from Lexer.hpp
#include <Kilo/Lexer.hpp>

Kilo::Lexer::Lexer(const std::string& p_src, const std::string& p_fileName)
{
    this->src = p_src;
    this->fileName = p_fileName;
    this->currentChar = 0;
    this->position = -1;
    this->commentStatus = false;
    this->stringStatus = false;
}

Kilo::Lexer::~Lexer()
{}