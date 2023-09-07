#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(13);

    std::cout << q.front() << "\n";
    std::cout << q.back() << "\n";

    q.pop();

    std::cout << q.front() << "\n";

    if (q.empty()) {
        std::cout << "Queue is empty\n";
    }
}