#include <iostream>

void print_recur(int n) {
    if (n == 0) {
        return ;
    }
    std::cout << "Coding is my favorite hobby!\n";
    print_recur(n-1);
}

int main() {
    int n;
    std::cin >> n;
    print_recur(n);
    return 0;
}