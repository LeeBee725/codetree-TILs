#include <iostream>

int main() {
    double ft = 30.48, mi = 160934.0;
    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << "9.2ft = " << 9.2 * ft << "cm\n";
    std::cout << "1.3mi = " << 1.3 * mi << "cm";
    return 0;
}