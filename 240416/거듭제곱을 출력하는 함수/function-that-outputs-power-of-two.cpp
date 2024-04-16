#include <iostream>

long long power(int a, int b) {
    if (b == 1) return a;
    else return a * power(a, b-1);
}

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << power(a, b);
    return 0;
}