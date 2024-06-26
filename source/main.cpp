#include <iostream>

#include "PalindromeChecker.hpp"

using namespace std;

int main() {
   cout << "Enter a string to check if it's a palindrome." << endl;
   string text;
   getline(cin, text);
   cout << (PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase(text) ? "The string is a palindrome." : "The string is not a palindrome.") << endl;
   return 0;
}
