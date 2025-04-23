#include <iostream>

long long mult(long long b, long long h) {
    long long p = 2 * (b + h);
    return p;
}

int main() {
    long long b, h;
    std::cin >> b >> h;
    if ((b >= 1 && b <= 1000000000) and (h >= 1 && h <= 1000000000)) {
        long long s = mult(b, h); 
        std::cout << s << std::endl;
    }
    else {
        std::cout << "Digite um valor de acordo com a restrição" << std::endl;
    } 
    return 0;
}