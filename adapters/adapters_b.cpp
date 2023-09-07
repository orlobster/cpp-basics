#include <iostream>
#include <queue>
#include <set>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::queue<int> q;
    std::multiset<int> window;
    for (int i = 1; i <= n; ++i) {
        int num;
        std::cin >> num;
        q.push(num);
        window.insert(num);
        if (i >= m) {
            std::cout << *window.begin() << "\n";
            auto iter = window.find(q.front());
            q.pop();
            window.erase(iter);
        }
    }
}