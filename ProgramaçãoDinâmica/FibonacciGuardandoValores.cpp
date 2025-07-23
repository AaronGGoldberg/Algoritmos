#include <iostream>
#include <vector>

std::vector<long long> dp;

long long fib(long long n){
    if (dp[n] != -1)
        return dp[n];
    if (n<2)
        dp[n] = n;
    else
        dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}

int main(){
    long long n;
    std::cin >> n;
    dp.resize(n+1, -1)
    long long resposta = fib(n);
    std::cout << "Fib(" << n << ") = " << resposta << std::endl;
    return 0;
}