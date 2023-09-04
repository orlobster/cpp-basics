#include <vector>
#include <iostream>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix) {
    std::vector<int> sample(matrix.size(), 0);
    std::vector<std::vector<int>> ans(matrix[0].size(), sample);
    for (size_t i = 0; i != matrix.size(); ++i) {
        for (size_t j = 0; j != matrix[0].size(); ++j) {
            int val = matrix[i][j];
            ans[j][i] = val;
        }
    }
    return ans;
}

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}};
    std::vector<std::vector<int>> ans = Transpose(matrix);
    for (size_t i = 0; i != ans.size(); ++i) {
        for (size_t j = 0; j + 1 != ans.size(); ++j) {
            std::cout << ans[i][j] << " ";
        }
        std::cout << "\n";
    }
}