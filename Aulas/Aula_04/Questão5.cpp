#include <iostream>
using namespace std;

int calcDivs(int n){
    int divs = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            divs += 1;
        }
    }
    return divs;
}

int main(){
    int n;
    cin >> n;
    if (n >= 1 and n <= 1000000000){
        cout << "O número " << n << " Tem o total de "<< calcDivs(n) << " Divisores" << endl;
    }
    else{
        cout << "Valor inválido";
    }
}