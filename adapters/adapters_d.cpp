#include <iostream>
#include <string>

bool NextToken(std::string_view& sv, const char& delimiter, std::string_view& token) {
    if (sv.empty()) {
        return false;
    }
    auto point = sv.find(delimiter);
    if (point != sv.npos) {
        token = sv.substr(0, point);
        sv.remove_prefix(point + 1);
    } else {
        token = sv;
        sv.remove_prefix(sv.size());
    }
    return true;
}

int main() {
    std::string_view sv = "Hello world and good bye";

    const char delimiter = ' ';
    std::string_view token;

    // Делим строку на токены по разделителю и перебираем эти токены:
    while (NextToken(sv, delimiter, token)) {
        // обрабатываем очередной token
        // например, печатаем его на экране:
        std::cout << token << "\n";
    }
}