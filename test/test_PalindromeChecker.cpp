#include <gtest/gtest.h>

#include "PalindromeChecker.hpp"

TEST(PalindromeCheckerTest, EmptyString) {
   EXPECT_TRUE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase(""));
}

TEST(PalindromeCheckerTest, SingleCharacter) {
   EXPECT_TRUE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase("a"));
}

TEST(PalindromeCheckerTest, PalindromeEvenLength) {
   EXPECT_TRUE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase("abba"));
}

TEST(PalindromeCheckerTest, PalindromeOddLength) {
   EXPECT_TRUE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase("racecar"));
}

TEST(PalindromeCheckerTest, NotPalindrome) {
   EXPECT_FALSE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase("hello"));
}

TEST(PalindromeCheckerTest, PalindromeWithSpaces) {
   EXPECT_TRUE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase("a man a plan a canal panama"));
}

TEST(PalindromeCheckerTest, NotPalindromeWithSpaces) {
   EXPECT_FALSE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase("this is not a palindrome"));
}

TEST(PalindromeCheckerTest, PalindromeWithPunctuationAndSpaces) {
   EXPECT_TRUE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase("Madam, in Eden, I'm Adam"));
}

TEST(PalindromeCheckerTest, NonPalindromeWithPunctuationAndSpaces) {
   EXPECT_FALSE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase("Hello, World!"));
}

TEST(PalindromeCheckerTest, PalindromeWithMixedCase) {
    EXPECT_TRUE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase("Able was I ere I saw Elba"));
}

TEST(PalindromeCheckerTest, LongPalindrome) {
   string longPalindrome(10000, 'a');
   EXPECT_TRUE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase(longPalindrome));
}

TEST(PalindromeCheckerTest, LongNonPalindrome) {
   string longNonPalindrome = string(9999, 'a') + 'b';
   EXPECT_FALSE(PalindromeChecker::isPalindromeIgnorePunctuationSpaceCase(longNonPalindrome));
}


int main(int argc, char **argv) {
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
