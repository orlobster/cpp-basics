#include <algorithm>

template <typename Iter>
Iter Unique(Iter first, Iter last) {
    auto iter1 = first;
    auto iter2 = first;
    while (iter2 != last) {
        if (*iter1 != *iter2) {
            *iter1 = std::move(*iter2);
        }
        ++iter1;
        const auto& value = *iter2;
        while (iter2 != last && *iter2 == value) {
            ++iter2;
        }
    }
    return iter1;
}