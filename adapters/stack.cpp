#include <iostream>
#include <list>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(1);
    s.push(13);
    s.pop();

    std::cout << s.top() << "\n";

    if (s.empty()) {
        std::cout << "Stack is empty\n";
    }

    std::stack<int, std::list<int>> s2; // по умолчанию используется std::deque
}