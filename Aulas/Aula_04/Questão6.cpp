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
    if (calcDivs(n) <= 2){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
}