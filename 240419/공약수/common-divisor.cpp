#include <iostream>

int euclidean(int a, int b) {
    if ( a < b ) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    while ( b != 0 ) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, gcd;
    std::cin >> n;

    if ( n == 2 ) {
        int a, b;
        std::cin >> a >> b;
        gcd = euclidean(a, b);
    } else if (n == 3) {
        int a, b, c;
        std::cin >> a >> b >> c;
        gcd = euclidean(euclidean(a, b), c);
    }
    for (int i = 1; i <= gcd; ++i) {
        if (gcd % i == 0) {
            std::cout << i << "\n";
        }
    }
    return 0;
}