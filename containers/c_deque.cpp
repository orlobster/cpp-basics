#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<int> queue;
    int number;
    std::string operation;
    size_t k;

    while (std::cin >> operation) {
        if (operation == "+left") {
            std::cin >> number;
            queue.push_front(number);
        } else if (operation == "+right") {
            std::cin >> number;
            queue.push_back(number);
        } else if (operation == "-left") {
            std::cin >> k;
            k = std::min(k, queue.size());
            queue.erase(queue.begin(), queue.begin() + k);
        } else {
            std::cin >> k;
            k = std::min(k, queue.size());
            queue.erase(queue.end() - k, queue.end());
        }
    }
    for (const auto& wagon : queue) {
        std::cout << wagon << " ";
    }
    std::cout << "\n";
}