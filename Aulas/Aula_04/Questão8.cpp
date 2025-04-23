#include <iostream>
using namespace std;

int mdc (int a, int b){
    int r;
    while (b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int a; int b;
    cin >> a >> b;
    cout << mdc(a, b) << endl;
}
