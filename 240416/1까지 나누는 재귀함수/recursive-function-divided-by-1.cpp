#include <iostream>

void print_recursive(int n) {
    if (n == 1) {
        std::cout << n;
        return ;
    }
    std::cout << n << " ";
    if (n % 2 == 0) print_recursive(n/2);
    else print_recursive(n/3);
}

int main() {
    int n;
    std::cin >> n;

    print_recursive(n);
    return 0;
}