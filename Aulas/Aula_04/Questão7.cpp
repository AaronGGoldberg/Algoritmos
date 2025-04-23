#include <iostream>
using namespace std;
int menor(int a, int b){
    int menor;
    menor = a;
    if (a > b){
        menor = b;
    }
    return menor;
}

int main(){
    bool primos = true;
    int a; int b;
    cin >> a >> b;
    int n = menor(a,b);
    for (int i = 2; i <= n ; i++){
        if (a % i == 0 and b % i == 0){
            primos = false;
        }
    }
    cout << primos << endl;
}