#include <array>
#include <deque>
#include <iostream>

int main() {
    std::array<int, 3> point = {1, 2, -3}; // непрерывный массив фиксированного размера
    std::deque<int> d = {1, 2, 3, 4};
    d.push_back(5); // как у вектора
    d.push_back(6);
    d.pop_back(); // удаляем из конца, как у вектора
    d.push_front(0); // добавление в начало
    d.push_front(-1);
    d.pop_front(); // удаление из начала

    // элементы дека: 0, 1, 2, 3, 4, 5

    // обращение по индексам
    for (size_t i = 0; i != d.size(); ++i) {
        std::cout << d[i] << "\n";
    }

    // range-based for
    for (int item : d) {
        std::cout << item << "\n";
    }
}