#include <iostream>
#include <vector>
#include <string>

std::string firstPalindrome(std::vector<std::string>& words){
    for (const auto& word : words) {
        size_t left = 0;
        size_t right = word.size() - 1;
        while (left < right) {
            if (word[left] != word[right]) {
                break;
            } else {
                ++left;
                --right;
            }
        }
        if (left >= right) {
            return word;
        }
    }
    return "";
}

int main() {
    std::vector<std::string> vec = {"apple", "aba"};
    std::cout << firstPalindrome(vec) << "\n";
}