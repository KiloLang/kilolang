// Implementation from Token.hpp
#include <Kilo/Token.hpp>

Kilo::Token::Token(Kilo::TokenType p_type)
{
    this->type = p_type;
}

Kilo::Token::Token(Kilo::TokenType p_type, const std::string& p_value)
{
    this->type = p_type;
    this->value = p_value;
}

Kilo::Token::~Token()
{}