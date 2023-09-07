#include <iostream>
#include <functional>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int> pq;
    for (int x : {3, 14, 15, 92, 6, 0, 1, 10}) {
        pq.push(x);
    }
    while (!pq.empty()) {
        std::cout << pq.top() << "\n";
        pq.pop();
    }

    // делаем min кучу
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    for (int x : {3, 14, 15, 92, 6, 0, 1, 10}) {
        min_pq.push(x);
    }
    std::cout << "Reversed:\n";
    while (!min_pq.empty()) {
        std::cout << min_pq.top() << "\n";
        min_pq.pop();
    }
}