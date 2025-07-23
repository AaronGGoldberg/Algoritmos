#include <iostream>

long long fib(long long n){
    if (n<2)
        return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    long long n;
    std::cin >> n;
    long long resposta = fib(n);
    std::cout << "Fib(" << n << ") = " << resposta << std::endl;
    return 0;
}