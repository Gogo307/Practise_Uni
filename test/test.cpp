#include <iostream>

int main() {
    double x, y;
    std:: cin >> x >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    std::cout << x << " " << y;
}