#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> Split(const std::string& str, char delimiter) {
    std::vector<std::string> ans;
    std::string word;
    for (const char& c : str) {
        if (c == delimiter) {
            ans.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }
    ans.push_back(word);
    return ans;
}

int main() {
    std::string str;
    char delimiter = '-';
    std::getline(std::cin, str);
    std::vector<std::string> ans = Split(str, delimiter);
    for (const auto& elem : ans) {
       std::cout << elem << std::endl;
    }
}