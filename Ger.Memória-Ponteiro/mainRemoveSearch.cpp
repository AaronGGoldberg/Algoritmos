#include <iostream>
#include <chrono>

const int INITIAL_CAPACITY = 8;
const int INCREASE_CAPACITY = 10000;

// Aumenta a capacidade do vetor
int* increase_capacity(int* data, int& capacity, int& size) {
    int* new_array = new int[capacity + INCREASE_CAPACITY];
    for (int i = 0; i < size; ++i)
        new_array[i] = data[i];
    delete[] data;
    capacity += INCREASE_CAPACITY;
    return new_array;
}

// Insere elemento no final
int* push_back(int* data, int& capacity, int& size, int value) {
    if (size == capacity)
        data = increase_capacity(data, capacity, size);
    data[size++] = value;
    return data;
}

// Remove o primeiro elemento igual ao valor
bool remove_element(int* data, int& size, int value) {
    for (int i = 0; i < size; ++i) {
        if (data[i] == value) {
            for (int j = i; j < size - 1; ++j)
                data[j] = data[j + 1];
            size--;
            return true;
        }
    }
    return false;
}

// Retorna o índice do valor x, ou -1 se não encontrar
int buscar_indice(int* data, int size, int x) {
    for (int i = 0; i < size; ++i) {
        if (data[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int* data;
    int size = 0;
    int capacity = INITIAL_CAPACITY;
    int x;

    auto beg = std::chrono::high_resolution_clock::now();

    data = new int[capacity];

    // Leitura de dados até -1
    std::cout << "Digite os valores da lista (-1 para encerrar):\n";
    while (std::cin >> x, x != -1)
        data = push_back(data, capacity, size, x);

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "\nQuantidade de números lidos: " << size << std::endl;
    std::cout << "Tamanho atual do vetor: " << capacity << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - beg);
    std::cerr << "Tempo de processamento: " << duration.count() << " microseconds(s)\n";

    // Remoção
    std::cout << "\nDigite um valor para remover: ";
    int valor_para_remover;
    std::cin >> valor_para_remover;
    if (remove_element(data, size, valor_para_remover))
        std::cout << "Valor removido com sucesso.\n";
    else
        std::cout << "Valor não encontrado.\n";

    // Busca de índice
    std::cout << "\nDigite um valor para buscar o índice: ";
    int valor_para_buscar;
    std::cin >> valor_para_buscar;
    int indice = buscar_indice(data, size, valor_para_buscar);
    if (indice != -1)
        std::cout << "Valor encontrado no índice: " << indice << std::endl;
    else
        std::cout << "Valor não encontrado na lista.\n";

    // Exibe elementos restantes
    std::cout << "\nElementos restantes na lista: ";
    for (int i = 0; i < size; ++i)
        std::cout << data[i] << " ";
    std::cout << std::endl;

    delete[] data; // Libera memória

    return 0;
}