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

struct fracao{
    int a;
    int b;
};

fracao soma(fracao &f1, fracao &f2){
    fracao r;
    int mmc = (f1.b * f2.b) / mdc(f1.b, f2.b);
    int soma = (f1.a * mmc / f1.b) + (f2.a * mmc / f2.b);
    r.a = soma;
    r.b = mmc;
    return r;
}

int main(){
    fracao f1, f2, r;
    f1.a = 2;
    f1.b = 5;
    f2.a = 6;
    f2.b = 8;
    r = soma(f1,f2);
    cout << r.a << " / " << r.b << endl;
    cout << r.a / mdc(r.a, r.b) << " / " << r.b / mdc(r.a, r.b) << endl;

}