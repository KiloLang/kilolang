// Implementation from Token.hpp
#include <Kilo/Token.hpp>
#include <Kilo/TokenType.hpp>

void Kilo::Token::setTokenType(Kilo::TokenType p_type)
{
    this->type = p_type;
}

void Kilo::Token::setValue(const std::string& p_value)
{
    this->value = p_value;
}
