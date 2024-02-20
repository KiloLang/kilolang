// Implementation from Lexer.hpp
#include <Kilo/Lexer.hpp>

bool Kilo::Lexer::isDoubleQuote() const
{
    return (this->currentChar == '\"');
}

bool Kilo::Lexer::isSingleQuote() const
{
    return (this->currentChar == '\'');
}

bool Kilo::Lexer::isWhitespace() const
{
    return (this->currentChar == ' ');
}

bool Kilo::Lexer::isComment() const
{
    return (this->currentChar == '#');
}

bool Kilo::Lexer::isEndOfLine() const
{
    return (this->currentChar == '\n' || this->currentChar == '\r');
}

bool Kilo::Lexer::isValidChar() const
{
    return (isalpha(this->currentChar) || this->currentChar == '_');
}

bool Kilo::Lexer::isParen() const
{
    return (this->currentChar == '(' || this->currentChar == ')');
}