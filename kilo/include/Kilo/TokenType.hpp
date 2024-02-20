#ifndef KILO_TOKENTYPE_HPP_
#define KILO_TOKENTYPE_HPP_

#include <string>

namespace Kilo
{
    enum class TokenType
    {
        DEFAULT,
        END_OF_LINE,
        END_OF_FILE,

        // SYMBOLS:
        LPAREN,
        RPAREN,

        // ---
        ID,
        KEY
    };    
}

#endif