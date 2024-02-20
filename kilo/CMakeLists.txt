cmake_minimum_required(VERSION 3.11)
project(kilo)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
    # Runners:
    src/main.cpp

    # Lexer:
    src/Lexer/Constructors.cpp
    src/Lexer/LexGetters.cpp
    src/Lexer/LexSetters.cpp
    src/Lexer/LexUtilities.cpp
    src/Lexer/Methods.cpp 
    src/Lexer/TokenChecks.cpp
    src/Lexer/TokenUtilities.cpp
    
    # Token:
    src/Token/Constructors.cpp
    src/Token/Getters.cpp
    src/Token/Setters.cpp
    src/Token/Utility.cpp

    # TokenTypeUtils:
    src/TokenTypeUtils/Getters.cpp
    src/TokenTypeUtils/Utility.cpp
)

include_directories(include)

add_executable(${PROJECT_NAME} ${SOURCES})
