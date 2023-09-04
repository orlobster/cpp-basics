#include <iostream>
#include <vector>
#include <string>

std::string CommonPrefix(const std::vector<std::string>& words) {
    if (words.empty()) {
        return "";
    }
    std::string prefix = words[0];
    size_t prefix_iterator = 0;
    size_t vector_iterator = 0;
    std::string new_prefix;
    for (auto& word : words) {
        while (prefix_iterator != prefix.size() && vector_iterator != word.size()) {
            if (prefix[prefix_iterator] == word[vector_iterator]) {
                new_prefix += word[vector_iterator];
                ++prefix_iterator;
                ++vector_iterator;
            } else {
                break;
            }
        }
        prefix = new_prefix;
        new_prefix.clear();
        prefix_iterator = 0;
        vector_iterator = 0;
    }
    return prefix;
}

int main() {
    std::vector<std::string> words = {"apple", "apricot", "application"};
    std::cout << CommonPrefix(words) << std::endl;
    
}