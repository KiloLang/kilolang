// Implementation form Token.hpp
#include <Kilo/Token.hpp>
#include <Kilo/TokenType.hpp>
#include <Kilo/TokenTypeUtils.hpp>

#include <sstream>

std::string Kilo::Token::toString() const
{
    std::stringstream ss;
    ss << "(" << TokenTypeUtils::toString(this->getTokenType());

    if(!this->getValue().empty()) {
        ss << ":" << this->getValue();
    }
    ss << ")";

    return ss.str();
}

