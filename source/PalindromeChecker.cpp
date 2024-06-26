#include "PalindromeChecker.hpp"


string PalindromeChecker::filterAndNormalize(const string& text) {

   string result;
   for (char ch : text) {
      if (isalnum(static_cast<unsigned char>(ch))) {
         result += tolower(static_cast<unsigned char>(ch));
      }
   }
   return result;
}

bool PalindromeChecker::isPalindrome(const string& input) {

   int inputLength = input.length();
   for (int i = 0; i < inputLength / 2; i++) {
      if (input.at(i) != input.at(inputLength - 1 - i)) {
         return false;
      }
   }
   return true;
}

bool PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase(const string& input) {

   string filteredText = filterAndNormalize(input);
   return isPalindrome(filteredText);
}
