#include <iostream>
#include <string>
#include <queue>

int main() {
    std::string command;
    std::priority_queue<int> heap;
    while (std::cin >> command) {
        if (command == "CLEAR") {
            while (!heap.empty()) {
                heap.pop();
            }
        } else if (command == "ADD") {
            int num;
            std::cin >> num;
            heap.push(num);
        } else if (command == "EXTRACT") {
            if (heap.empty()) {
                std::cout << "CANNOT\n";
            } else {
                std::cout << heap.top() << "\n";
                heap.pop();
            }
        } else {
            std::cout << "UNKNOWN COMMAND\n";
        }
    }
}
