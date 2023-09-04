#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> message;
    std::string text;
    while (std::getline(std::cin, text)) {
        if (text.empty()) {
            break;
        }
        message.push_back(text);
    }

    auto cursor = message.begin();
    std::string buffer;
    std::string action;
    while (std::cin >> action) {
        if (action == "Up") {
            if (cursor == message.begin()) {
                continue;
            }
            --cursor;
        } else if (action == "Down") {
            if (cursor == message.end()) {
                continue;
            }
            ++cursor;
        } else if (action == "Ctrl+X") {
            if (cursor == message.end()) {
                continue;
            }
            buffer = *cursor;
            cursor = message.erase(cursor);
        } else {
            if (!buffer.empty()) {
                message.insert(cursor, buffer);
            }
        }
    }
    for (const auto& sentence : message) {
        std::cout << sentence << "\n";
    }
}
