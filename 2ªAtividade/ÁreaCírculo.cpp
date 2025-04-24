#include <iostream>
#include <iomanip>

float area(float diametro) {
    float r = diametro / 2;
    float a = 3.14159 * r * r;
    return a;
}

double area1(double diametro) {
    double r1 = diametro / 2;
    double a1 = 3.14159 * r1 * r1;
    return a1;
}

int main() {
    float diametro;
    double diametro1;
    std:: cin >> diametro;
    std:: cin >> diametro1;
    float a = area(diametro);
    double a1 = area1(diametro1);
    std::cout << std::fixed << std::setprecision(5) << a << std::endl;
    std::cout << std::fixed << std::setprecision(5) << a1 << std::endl;
    return 0;
}

//FIM