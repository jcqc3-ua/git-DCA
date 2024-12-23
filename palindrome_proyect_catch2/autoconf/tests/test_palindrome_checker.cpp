#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "palindrome_checker.h"

TEST_CASE("Palindrome detection", "[check_palindrome]") {
    REQUIRE(check_palindrome("A man a plan a canal Panama") == true);
    REQUIRE(check_palindrome("Was it a car or a cat I saw") == true);
    REQUIRE(check_palindrome("hello world") == false);
    REQUIRE(check_palindrome("Madam") == true);
    REQUIRE(check_palindrome("") == true);
    REQUIRE(check_palindrome("12321") == true);
    REQUIRE(check_palindrome("123456") == false);
}
