#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float dFloat;
    double dDouble;
    float piF = 3.14159;
    double piD = 3.14159;
    cin >> dFloat >> dDouble;
    float rFloat = dFloat / 2.0;
    double rDouble = dDouble / 2.0;
    float areaFloat = piF * (rFloat * rFloat); 
    double areaDouble = piD * (rDouble * rDouble);

    cout << fixed << setprecision(5) << areaFloat << endl;
    cout << fixed << setprecision(5) << areaDouble << endl;
}