#ifndef KILO_LEXER_HPP_
#define KILO_LEXER_HPP_

#include <vector>
#include <string>

#include "Token.hpp"
#include "TokenType.hpp"

namespace Kilo 
{
    struct LexResult
    {
        std::vector<Kilo::Token*> tokens;
    };

    class Lexer 
    {
        private: // MemberVariables:
            std::vector<std::string> keywords;
            std::vector<Kilo::Token*> result;
            std::string src;
            std::string fileName;
            bool debugStatus;            
            bool commentStatus;
            bool stringStatus;
            char currentChar;
            int position;

        public: // Constructors:
            Lexer() = delete;
            Lexer(const std::string& p_src, const std::string& p_fileName);
            ~Lexer();

        private: // LexGetters:
            char getChar() const;

        private: // LexSetters:
            void setComment(bool p_status);
            void setChar();
            void setEndChar();

        private: // LexUtilities:
            void advance();
            void nextPosition();
            bool shouldRead() const;
            bool canRead() const;

        public: // Methods:
            Kilo::LexResult lex();
            void setDebugStatus(bool p_status);
            bool getDebugStatus() const;
            void setupKeywords();

        private: // TokenChecks:
            bool isDoubleQuote() const;
            bool isSingleQuote() const;
            bool isWhitespace() const;
            bool isComment() const;
            bool isEndOfLine() const;
            bool isValidChar() const;
            bool isParen() const;

        private: // TokenUtilities:
            std::vector<Kilo::Token*> makeTokens();
            Kilo::Token* makeIdOrKey();
            Kilo::Token* makeParen();       
     
    };
} 

#endif
