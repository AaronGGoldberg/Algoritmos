#include <iostream>
//O(n^2)
void contarOcorrencias(int A[], int n){
    int C[n];
    for(int i = 0; i < n; ++i){
        if(C[i] == 0){ //verifica se o elementos atual da lista ja foi contado
            continue;
        }
        C[i] = 1;

        for(int j = i + 1; j < n; ++j){
            if (A[i] == A[j]){
                C[i] = C[i] + 1;
                C[j] = 0; //Marca o indice da lista que ja foi contado
            }
        }
    }

    for(int i = 0; i < n; ++i){
        if (C[i] > 1){
            std::cout << "O Elemento " << A[i] << " Ocorre " << C[i] << " vezes" << std::endl; 
        }
    }
}

int main(){
    int n;
    std::cin >> n;
    if (n < 1 && n > 1000000){
        std::cout << "Erro de entrada, valor inválido!!!";
    }
    int A[n];
    for(int i = 0; i < n; ++i){
        std::cin >> A[i];
        if (A[i] < 0 && A[i] > 100000){
            std::cout << "Valor Inválido!";
        }
    }
    contarOcorrencias(A, n);
    return 0;
}
