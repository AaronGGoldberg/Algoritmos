#include <iostream>

long long soma(long long a, long long b) {
long long r = a + b;
return r;
}

int main() {
long long a, b;
std::cin >> a >> b;
long long s = soma(a, b); std::cout << s << std::endl; return 0;
}
