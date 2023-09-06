#include <algorithm>
#include <iterator>
#include <vector>

template <typename T>
void Process(const std::vector<T>& data) {
    std::vector<T> filtered;

    std::copy_if(
            data.begin(),
            data.end(),
            std::back_inserter(filtered),
            [](const T& x) { return x > 0; }
    );

    PrintResults(filtered.begin(), filtered.end());
}