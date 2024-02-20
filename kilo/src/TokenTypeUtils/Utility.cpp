// Implementation from TokenTypeUtils.hpp
#include <Kilo/TokenTypeUtils.hpp>

void Kilo::TokenTypeUtils::init()
{
    TokenTypeUtils::registerTokenType(TokenType::DEFAULT, "DEFAULT");
    TokenTypeUtils::registerTokenType(TokenType::END_OF_FILE, "EOF");
    TokenTypeUtils::registerTokenType(TokenType::END_OF_LINE, "EOL");
}

void Kilo::TokenTypeUtils::registerTokenType(const Kilo::TokenType& p_type, const std::string& p_str)
{
    Kilo::TokenTypeUtils::typeMap[p_type] = p_str;
}
