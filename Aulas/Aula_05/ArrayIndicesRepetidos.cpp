#include <iostream>

void contarOcorrencias(int A[], int n){
    int C[n];
    for (int i = 0; i < n; ++i){
        C[i] = 1;
    }
    for(int i = 0; i < n; ++i){
        if(C[i] == 0){
            continue;
        }
        std::cout << "Ocorrências " << i << std::endl;
        for(int j = i + 1; j < n; ++j){
            if (A[i] == A[j]){
                C[i] = C[i] + 1;
                C[j] = 0;
                std::cout << C[i] << " " << i << " " << j << std::endl;
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
    int A[n];
    for(int i = 0; i < n; ++i){
        std::cin >> A[i];
    }
    contarOcorrencias(A, n);
    return 0;
}