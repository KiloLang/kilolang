// Implementation from Token.hpp
#include <Kilo/Token.hpp>
#include <Kilo/TokenType.hpp>

Kilo::TokenType Kilo::Token::getTokenType() const
{
    return this->type;
}

std::string Kilo::Token::getValue() const
{
    if(!this->value.empty()) {
        return this->value;
    }
    return "NULL";
}