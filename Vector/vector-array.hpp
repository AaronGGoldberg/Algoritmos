#ifndef __VECTOR_ARRAY_IFRN__
#define __VECTOR_ARRAY_IFRN__
class vector_array {
private:
    int *data;
    unsigned int size_, capacity_;
    void increase_capacity() {
        int *new_array;
    }

public:
    vector_array() {                                // Construtor
        std::cout << "Vector: construtor chamado!" << std::endl;
        data = new int[8];                          // Aloca espaço para 8 elementos
        this->size_ = 0;                            // Inicializa o tamanho como 0
        this->capacity_ = 8;                        // Inicializa a capacidade como 8
    }
    ~vector_array() {                               // Destrutor
        std::cout << "Vector: destrutor chamado!" << std::endl;
        delete [] data;
    }
    unsigned int size() {
        return this -> size_;
    }                           // Retorna a quantidade de elementos armazenados
    unsigned int capacity() {
        return this -> capacity_;
    }                       // Retorna o espaço reservado para armazenar os elementos
    double percent_occupied() {}                     // Retorna um valor entre 0.0 a 1.0 com o percentual da
                                                     // memória usada.
    bool insert_at(unsigned int index, int value) {} // Insere elemento no índice index
    bool remove_at(unsigned int index) {}            // Remove elemento do índice index
    int get_at(unsigned int index) {
        if (index < 0 or index >= this->size_){
            return -1;
        }
        return this -> data[index];
    }                // Retorna elemento no índice index,
                                                     // −1 se índice inválido
    void clear() {}                                  // Remove todos os elementos, deixando o vetor no estado inicial
    void push_back(int value) {
        if (this -> size_ == this -> capacity_){
            this -> increase_capacity()
        }
        this -> data[size_] = value;
        this -> size_ = this -> size_ + 1;

    }                     // Adiciona um elemento no ``final'' do vetor
    void push_front(int value) {}                    // Adiciona um elemento no ``início'' do vetor
    bool pop_back() {}                               // Remove um elemento do ``final'' do vetor
    bool pop_front() {}                              // Remove um elemento do ``início'' do vetor
    int back() {}                                    // Retorna o elemento do ``final'' do vetor
    int front() {}                                   // Retorna o elemento do ``início'' do vetor
    bool remove(int value) {}                        // Remove value do vetor caso esteja presente
    int find(int value) {}                           // Retorna o índice de value, −1 caso value não esteja presente
    int count(int value) {}                          // Retorna quantas vezes value occorre no vetor
    int sum() {}                                     // Retorna a soma dos elementos do vetor
};
#endif // __VECTOR_LIST_IFRN__