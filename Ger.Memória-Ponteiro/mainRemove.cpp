#include <iostream>
#include <chrono>

const int INITIAL_CAPACITY = 8;
const int INCREASE_CAPACITY = 10000;

// Função para aumentar a capacidade do vetor
int* increase_capacity(int* data, int& capacity, int& size) {
    int* new_array = new int[capacity + INCREASE_CAPACITY];
    for (int i = 0; i < size; ++i)
        new_array[i] = data[i];

    delete[] data;
    capacity += INCREASE_CAPACITY;
    return new_array;
}

// Função para inserir elemento no final do vetor
int* push_back(int* data, int& capacity, int& size, int value) {
    if (size == capacity)
        data = increase_capacity(data, capacity, size);

    data[size++] = value;
    return data;
}

// Função para remover o primeiro elemento com valor igual ao fornecido
bool remove_element(int* data, int& size, int value) {
    for (int i = 0; i < size; ++i) {
        if (data[i] == value) {
            // Desloca elementos à esquerda
            for (int j = i; j < size - 1; ++j) {
                data[j] = data[j + 1];
            }
            size--; // Atualiza o tamanho da lista
            return true; // Valor removido
        }
    }
    return false; // Valor não encontrado
}

int main() {
    int* data;
    int size = 0;
    int capacity = INITIAL_CAPACITY;
    int x;

    auto beg = std::chrono::high_resolution_clock::now();

    data = new int[capacity];

    // Leitura de entrada até encontrar -1
    while (std::cin >> x, x != -1)
        data = push_back(data, capacity, size, x);

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Quantidade de números lidos: " << size << std::endl;
    std::cout << "Tamanho do vetor: " << capacity << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - beg);
    std::cerr << "Tempo de processamento: " << duration.count() << " microseconds(s)" << std::endl;

    // Teste da função de remoção
    int valor_para_remover;
    std::cout << "Digite um valor para remover: ";
    std::cin >> valor_para_remover;

    bool removido = remove_element(data, size, valor_para_remover);

    if (removido)
        std::cout << "Valor removido com sucesso." << std::endl;
    else
        std::cout << "Valor não encontrado na lista." << std::endl;

    // Mostra os elementos restantes
    std::cout << "Elementos restantes: ";
    for (int i = 0; i < size; ++i)
        std::cout << data[i] << " ";
    std::cout << std::endl;

    delete[] data; // Libera memória

    return 0;
}