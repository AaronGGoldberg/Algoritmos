#include <iostream>

int menor_index(int a[], unsigned int n) {
int index_menor = 0;
int resultado = a[0];
for (unsigned int i = 1; i < n; ++i) {
if (a[i] < resultado) {
resultado = a[i];
index_menor = i;
}
}
return index_menor;
}
int main() {
unsigned int n;
std::cin >> n;
int a[n];
for (unsigned int i = 0; i < n; ++i) {
std::cin >> a[i];
}
int menor = menor_index(a, n);
std::cout << menor << std::endl;
return 0;
}