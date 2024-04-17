#include <iostream>

void print_recur(int n) {
    if (n < 3) {
        std::cout << n;
        return ;
    }
    print_recur(n/3);
    std::cout << " " << n;
}

int main() {
    int n;
    std::cin >> n;

    print_recur(n);
    return 0;
}