#include <iostream>
#include <vector>

struct Point {
    int x, y;
};

int main() {
    size_t n;
    std::cin >> n;

    std::vector<Point> points(n);

    for (size_t i = 0; i != n; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    std::sort(points.begin(), points.end(), [](const Point& first, const Point& second) {
       return first.x * first.x + first.y * first.y < second.x * second.x + second.y * second.y;
    }
    );

    for (const auto& point : points) {
        std::cout << point.x << " " << point.y << "\n";
    }
}