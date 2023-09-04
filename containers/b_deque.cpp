#include <deque>
#include <iostream>
#include <string>

int main() {
    std::deque<std::string> queue;

    int n;
    std::cin >> n;

    std::string name;
    std::string action;

    for (int i = 0; i != n; ++i) {
        std::cin >> name >> action;
        if (action == "top") {
            queue.push_front(name);
        } else {
            queue.push_back(name);
        }
    }
    int m;
    std::cin >> m;
    int number;
    for (int i = 0; i != m; ++i) {
        std::cin >> number;
        std::cout << queue[number - 1] << "\n";
    }
}