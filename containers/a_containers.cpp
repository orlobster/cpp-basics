#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers;
    int number;
    while (std::cin >> number) {
        if (numbers.contains(number)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
            numbers.insert(number);
        }
    }
}