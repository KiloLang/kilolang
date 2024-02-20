// Implementation from Lexer.hpp
#include <Kilo/Lexer.hpp>

void Kilo::Lexer::setComment(bool p_status)
{
    this->commentStatus = p_status;
}

void Kilo::Lexer::setChar()
{
    this->currentChar = this->src[this->position]; 
}

void Kilo::Lexer::setEndChar()
{
    this->currentChar = 0;
}