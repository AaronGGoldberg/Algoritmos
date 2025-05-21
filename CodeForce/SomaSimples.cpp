#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    if (-1000 >= a and a >= 1000){
        cout << "Deu ruim";
        return 1;
    }
    cin >> b;
    if (-1000 >= b and b >= 1000){
        cout << "Deu ruim";
        return 1;
    }
    int total = a + b;
    cout << total << endl;
    return 0;
}