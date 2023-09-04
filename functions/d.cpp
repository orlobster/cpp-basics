#include <vector>
#include <string>
#include <iostream>

std::string Join(const std::vector<std::string>& tokens, char delimiter){
    std::string ans;
    if (tokens.empty()) {
        return "";
    }
    for (size_t i = 0; i + 1 < tokens.size(); ++i) {
        ans += tokens[i];
        ans += delimiter;
    }
    ans += tokens[tokens.size() - 1];
    return ans;
}

int main() {
    std::vector<std::string> tokens = {"Hello", " world!"};
    char delimiter = ',';
    std::cout << Join(tokens, delimiter) << std::endl;
}