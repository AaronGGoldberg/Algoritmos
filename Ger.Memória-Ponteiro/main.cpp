#include <iostream>
#include <chrono>

const int INITIAL_CAPACITY = 100, INCREASE_CAPACITY = 100;
int∗ increase_capacity(int∗ data, int& capacity, int& size) {
    int∗ new_array = new int[capacity + INCREASE_CAPACITY];
    for (int i = 0; i < size; ++i)
        new_array[i] = data[i];
    int∗ old_array = data;
    delete[] old_array;
    capacity = capacity + INCREASE_CAPACITY;
    return new_array;
}

int∗ push_back(int∗ data, int& capacity, int& size, int value) {
    if (size == capacity)
        data = increase_capacity(data, capacity, size);
    data[size++] = value;
    return data;
}

int main() {
    int∗ data;
    int size = 0, capacity = INITIAL_CAPACITY, x;
    auto beg = std::chrono::high_resolution_clock::now();
    data = new int[capacity];
    while (std::cin >> x, x != −1)
        data = push_back(data, capacity, size, x);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Quantidade de números lidos: " << size << std::endl;
    std::cout << "Tamanho do vetor: " << capacity << std::endl;
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end − beg);
    std::cerr << "Tempo de processamento: " << duration.count() << " microseconds(s)" << std::endl;
    delete[] data; // Free the allocated memory
    return 0;
}