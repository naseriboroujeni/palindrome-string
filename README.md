# PalindromeChecker

This project is a C++ application to check if a given string is a palindrome. It ignores punctuation, spaces, and case when determining if the string is a palindrome. The project also includes unit tests using Google Test.

## Requirements

- CMake 3.10 or higher
- Google Test
- C++11 compatible compiler

## Installation

1. **Clone the repository:**
   ```sh
   git clone https://github.com/naseriboroujeni/palindrome-string.git
   cd PalindromeChecker
2. **Build the project:**
   ```sh
   mkdir build
   cd build
   cmake ..
   make

## Usage
**Running the Application:**
   To run the main application, use the following command:
   ```sh
   ./build/palindromeChecker
   ```
**Running the Tests:**
   To run the unit tests, use the following command:
   ```sh
   ./build/palindromeCheckerTest
   ```

## Project Structure
```sh
.
├── CMakeLists.txt
├── README.md
├── include
│   └── PalindromeChecker.hpp
├── source
│   └── PalindromeChecker.cpp
│   └── main.cpp
└── test
    └── test_palindromeChecker.cpp

