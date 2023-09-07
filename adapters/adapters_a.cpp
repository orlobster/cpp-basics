#include <iostream>
#include <stack>

bool CheckSequence(const std::string& seq) {
    std::stack<char> s;
    for (const char& c : seq) {
        if (c == '{' || c == '[' || c == '(') {
            s.push(c);
        } else if ((s.empty()) || (c == '}' && s.top() != '{')||
                (c == ')' && s.top() != '(') ||
                (c == ']'&& s.top() != '[')) {
            return false;
        } else {
            s.pop();
        }
    }
    return s.empty();
}


int main() {
    std::string seq;
    std::cin >> seq;
    bool ans = CheckSequence(seq);
    if (ans) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}