#include <iostream>
#include <list>

template <typename T>
struct Node {
    T value;
    Node* prev;
    Node* next;
};

int main() {
    std::list<int> l = {0, 10, 15, 20};
    auto iter = l.begin();
    ++iter;
    l.insert(iter, 5);

    for (auto iter = l.begin(); iter != l.end(); ) {
        if (*iter % 2 == 0) {
            iter = l.erase(iter);
        } else {
            ++iter;
        }
    }
    for (int x : l) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}