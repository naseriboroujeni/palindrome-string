cmake_minimum_required(VERSION 3.10)

# Set the project name
project(PalindromeChecker)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

add_library(palindromeCheckerLib STATIC "./source/PalindromeChecker.cpp")

add_executable(palindromeChecker "./source/main.cpp")
target_link_libraries(palindromeChecker palindromeCheckerLib)
