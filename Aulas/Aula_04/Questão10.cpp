#include <iostream>
#include <iomanip>

double raizQuadrada(double n){
    double anterior = n / 2;
    double atual;
    while(true){

        atual = (anterior + n / anterior ) / 2;

        if((anterior - atual) <= 0.001 ){
            break;
        }
        anterior = atual;
    }
    return atual;
}


int main(){
    double numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    if(numero < 0){
        std::cout << "não pode numero negativo";

    }
    else{
        std::cout << std::fixed << std::setprecision(4) << "A raiz quadrada aproximada é: " << raizQuadrada(numero) << std::endl;
        
    }
    
    return 0;
}