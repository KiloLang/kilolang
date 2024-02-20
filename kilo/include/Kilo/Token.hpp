#ifndef KILO_TOKEN_HPP_
#define KILO_TOKEN_HPP_

#include <string>

#include "TokenType.hpp"

namespace Kilo
{
    class Token
    {
        private: // Member Variables:
            TokenType type;
            std::string value;
        public: // Constructors:
            Token() = delete;
            Token(TokenType p_type);
            Token(TokenType p_type, const std::string& p_value);
            
            ~Token();
        public: // Getters:
            TokenType getTokenType() const;
            std::string getValue() const;
        public: // Setters:
            void setTokenType(TokenType p_type);
            void setValue(const std::string& p_value);
        public: // Utility:
            std::string toString() const;

    };
}

#endif