#define BOOST_TEST_MODULE PalindromeCheckerTests
#include <boost/test/included/unit_test.hpp>
#include "../src/palindrome_checker.h"

BOOST_AUTO_TEST_SUITE(PalindromeTests)

BOOST_AUTO_TEST_CASE(EmptyString) {
    BOOST_CHECK(is_palindrome(""));
}

BOOST_AUTO_TEST_CASE(SimplePalindrome) {
    BOOST_CHECK(is_palindrome("racecar"));
}

BOOST_AUTO_TEST_CASE(NotAPalindrome) {
    BOOST_CHECK(!is_palindrome("hello"));
}

BOOST_AUTO_TEST_CASE(PalindromeWithSpaces) {
    BOOST_CHECK(is_palindrome("A man a plan a canal Panama"));
}

BOOST_AUTO_TEST_CASE(PalindromeWithSpecialCharacters) {
    BOOST_CHECK(is_palindrome("No 'x' in Nixon"));
}

BOOST_AUTO_TEST_SUITE_END()
