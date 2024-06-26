#ifndef PALINDROME_CHECKER_HPP
#define PALINDROME_CHECKER_HPP

#include <string>

using namespace std;

class PalindromeChecker {

private:
   /**
    * Filters out non-alphanumeric characters from the given string and converts the remaining
    * characters to lowercase.
    *
    * @param text The string to be filtered and normalized.
    * @return A new string containing only lowercase alphanumeric characters from the original string.
    */
   static string filterAndNormalize(const std::string &text);

   /**
    * Checks if the given string is a palindrome.
    *
    * @param text The string to be checked.
    * @return true if the string is a palindrome, false otherwise.
    */
   static bool isPalindrome(const string &input);

public:
   /**
    * Checks if the given string is a palindrome, ignoring punctuation, spaces, and case.
    *
    * @param text The string to be checked.
    * @return true if the string is a palindrome, false otherwise.
    */
   static bool isPalindromeIgnorePunctuationSpaceCase(const string &input);
};

#endif
