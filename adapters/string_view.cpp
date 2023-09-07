#include <iostream>
#include <string>

struct string_view {
    const char* start;
    size_t len;
};

int main() {
    std::string s = "Hello, world! How do you do?";
    auto sub = s.substr(7, 5);
    sub[0] = 'W';
    std::cout << sub << "\n";
    std::cout << s << "\n"; // все как раньше

    std::cout << "Using string_view:" << "\n";
    std::string_view sv = s;
    sv.remove_prefix(7);
    sv.remove_suffix(16);
    // sv[0] = 'W' - нельзя изменять символы через string_view
    std::cout << sv << "\n";
    std::cout << s << "\n";
}


