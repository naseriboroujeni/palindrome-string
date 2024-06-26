#ifndef PALINDROME_CHECKER_HPP
#define PALINDROME_CHECKER_HPP

#include<string>

using namespace std;

class PalindromeChecker {

private:
   static string filterAndNormalize(const std::string& text);
   static bool isPalindrome(const string&  input);

public:
   static bool isPalindromeIgnorePunctuationSpaceCase(const string& input);
};

#endif
