#include "PalindromeChecker.hpp"

bool PalindromeChecker::isPalindrome(string input) {
   
   int inputLength = input.length();
   for (int i = 0; i < inputLength / 2; i++) {
      if (input.at(i) != input.at(inputLength - 1 - i)) {
         return false;
      }
   }
   return true;
}
