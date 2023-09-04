#include <iostream>
#include <set>
#include <string>
#include <map>

int main() {
    std::map<int, std::set<std::string>> hashmap;
    size_t n;
    std::cin >> n;

    for (size_t i = 0; i != n; ++i) {
        std::string word;
        int page;
        std::cin >> word >> page;
        if (!hashmap[page].contains(word)) {
            hashmap[page].insert(word);
        }
    }

    for (const auto& [page, words]: hashmap) {
        std::cout << page;
        for (const auto& word : words) {
            std::cout << " " << word;
        }
        std::cout << "\n";
    }
}