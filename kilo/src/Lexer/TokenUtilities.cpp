// Implementation from Lexer.hpp
#include <Kilo/Lexer.hpp>
#include <Kilo/Token.hpp>

#include <iostream>

std::vector<Kilo::Token*> Kilo::Lexer::makeTokens()
{
    std::vector<Kilo::Token*> result;
    while(this->shouldRead()) {
        if(this->isDoubleQuote()) {
            
            continue;
        }

        if(this->isWhitespace()) {
            this->advance();
            continue;
        }
         
        if(this->isComment()) {
            this->setComment(true);
            this->advance();
            continue;
        }

        if(this->isEndOfLine()) {
            this->setComment(false);
            this->advance();
            continue;
        }

        if(this->isValidChar()) {
            this->result.push_back(this->makeIdOrKey()); 
            this->advance();    
            continue;
        }

        if(this->isParen()) {
            this->result.push_back(this->makeParen());
            this->advance();
            continue;
        } 
    }
}

Kilo::Token* Kilo::Lexer::makeIdOrKey()
{
    std::string token;
    while(this->isValidChar()) {
        token += this->getChar();
        this->advance();
    }

    if(std::find(this->keywords.begin(), this->keywords.end(), token) != this->keywords.end()) {
        return new Kilo::Token(Kilo::TokenType::KEY, token);
    }

    return new Kilo::Token(Kilo::TokenType::ID, token);
}

Kilo::Token* Kilo::Lexer::makeParen()
{
    if(this->getChar() == '(') {
        return new Kilo::Token(Kilo::TokenType::LPAREN);
    }
    return new Kilo::Token(Kilo::TokenType::RPAREN); 
}

