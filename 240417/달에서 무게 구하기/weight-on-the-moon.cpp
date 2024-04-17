#include <iostream>

int main() {
    int w = 13;
    double g = 0.165;
    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << w << " * " << g << " = " << w * g;
    return 0;
}