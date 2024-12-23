#include "palindrome_checker.h"
#include <algorithm>
#include <cctype>

bool check_palindrome(const std::string& text) {
    std::string filtered;
    for (char c : text) {
        if (std::isalnum(c)) {
            filtered += std::tolower(c);
        }
    }

    std::string reversed = filtered;
    std::reverse(reversed.begin(), reversed.end());

    return filtered == reversed;
}
