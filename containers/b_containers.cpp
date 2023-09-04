#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>

int main() {
        std::map<char, size_t> letter_counter;
        std::set<char> check_letter;
        std::vector<std::string> words;
        std::string elem;
        while (std::cin >> elem) {
            words.push_back(elem);
        }
        for (const std::string& word : words) {
            check_letter.clear();
            for (const char& letter : word) {
                if (!check_letter.contains(letter)) {
                    ++letter_counter[letter];
                    check_letter.insert(letter);
                }
            }
        }
        for (const auto& [letter, cnt] : letter_counter) {
            if (cnt == words.size()) {
                std::cout << letter;
            }
        }
        std::cout << "\n";
}