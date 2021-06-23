#include <iostream>
#include <string>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
    for (int i = 0; i < text.size() / 2; i++) 
        if (text[i] != text[text.size() - 1 - i])
            return false;
    return true;
}

int main() {
    std::cout << std::boolalpha << is_palindrome("madam") << "\n";
    std::cout << std::boolalpha << is_palindrome("ada") << "\n";
    std::cout << std::boolalpha << is_palindrome("lovelace") << "\n";
}