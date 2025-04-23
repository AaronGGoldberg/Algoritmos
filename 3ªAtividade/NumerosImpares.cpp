#include <iostream>

int n_impar (int a[], unsigned n) {
    int resultados = a[0];
    int cont = 0;
    for (unsigned int i = 1; i < n; i++) {
        if (a[i] % 2 != 0){
            cont += 1;
        }
    }
}