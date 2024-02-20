#ifndef KILO_TOKENTYPEUTILS_HPP_
#define KILO_TOKENTYPEUTILS_HPP_

#include "TokenType.hpp"

#include <map>
#include <string>

namespace Kilo
{
    class TokenTypeUtils
    {
        private:
            static std::map<TokenType, std::string> typeMap;
        private: // Utility:
            static void init();
            static void registerTokenType(const TokenType& p_type, const std::string& p_str);
        public: // Getters:
            static std::string toString(const TokenType& p_type);
    };
}

#endif