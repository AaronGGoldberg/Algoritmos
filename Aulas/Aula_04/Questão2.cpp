#include <iostream>
using namespace std;

int perimeter(int l1, int l2){
    int p;
    p = 2 * (l1 + l2);
    return p;
}

int main(){
    int l1,l2;
    cin >> l1 >> l2;
    if ((l1 >= 1 and l1 <= 1000000000) and (l2 >= 1 and l2 <= 1000000000)){
        cout << "O Perimetro do Retangulo é " << perimeter(l1,l2) << endl;
    }
    else{
        cout << "Escreva valores válidos!";
    }
}