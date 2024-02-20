// Implementation from TokenTypeUtils.hpp
#include <Kilo/TokenTypeUtils.hpp>

std::string Kilo::TokenTypeUtils::toString(const Kilo::TokenType& p_type)
{
    return Kilo::TokenTypeUtils::typeMap[p_type];
}