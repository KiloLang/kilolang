// Implementation from Lexer.hpp
#include <Kilo/Lexer.hpp>

void Kilo::Lexer::advance()
{
    this->nextPosition();
    if(this->canRead()) {
        this->setChar();
        return;
    }
    this->setEndChar();
}

void Kilo::Lexer::nextPosition()
{
    this->position++;
}

bool Kilo::Lexer::shouldRead() const
{
    return (this->currentChar != 0);
}

bool Kilo::Lexer::canRead() const
{
    return (this->position < this->src.size());
}