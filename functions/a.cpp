#include <iostream>
#include <vector>
#include <utility>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int> >& matrix) {
    int current_max = matrix[0][0];
    std::pair<size_t, size_t> current_argmax = {0, 0};
    for (size_t i = 0; i != matrix.size(); ++i) {
        for (size_t j = 0; j != matrix[i].size(); ++j) {
            if (matrix[i][j] > current_max) {
                current_max = matrix[i][j];
                current_argmax = {i, j};
            }
        }
    }
    return current_argmax;
}

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {2, 3, 4}};
    std::pair<size_t, size_t> ans = MatrixArgMax(matrix);
    std::cout << ans.first << ans.second << std::endl;
}