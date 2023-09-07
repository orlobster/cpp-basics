#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
#include <utility>
#include <vector>

int main() {
    size_t k;
    std::cin >> k;

    std::unordered_map<std::string, int> hashmap;
    std::string word;
    while (std::cin >> word) {
        ++hashmap[word];
    }

    std::priority_queue<std::pair<int, std::string>> heap;
    for (const auto& [key, freq]: hashmap) {
        heap.push({-freq, key});
        while (heap.size() > k) {
            heap.pop();
        }
    }

    std::vector<std::pair<int, std::string>> vec;

    while (!heap.empty()) {
        auto [freq, key] = heap.top();
        vec.push_back({-freq, key});
        heap.pop();
    }

    std::reverse(vec.begin(), vec.end());

    for (const auto& [freq, key] : vec) {
        std::cout << key << "\t" << freq << "\n";
    }
}