#include "palindrome_checker.h"
#include <algorithm>
#include <cctype>

bool is_palindrome(const std::string& str) {
    std::string filtered;
    for (char c : str) {
        if (std::isalnum(c)) {
            filtered += std::tolower(c);
        }
    }
    std::string reversed = filtered;
    std::reverse(reversed.begin(), reversed.end());
    return filtered == reversed;
}
