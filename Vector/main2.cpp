#include <iostream>
#include "vector-array.hpp"

void teste(int inicio, int fim){
    vector_array x;
    vector_array *y;
    for (int i=inicio ; i<fim ; i++){
        x.push_back(i);
    }
    for (int i=0 ; i<x.size() ; i++){
        std::cout << x.get_at(i) << " " ;
    }
    std::cout << std::endl;
    std::cout << "Y: ";
    y = new vector_array();
    for (int i=inicio ; i<fim ; i++){
        y -> push_back(i);
        //(*y).push_back(i);
    }
    for (int i=0 ; i<x.size() ; i++){
        std::cout << y -> get_at(i) << " " ;
    }
}

int main(){
    vector_array v1;
    int n;
    std:: cin >> n;

    for (int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        v1.push_back(x);
    }

    std::cout << "v1 (size=" << v1.size() << ", capacity="
    << v1.capacity() << "): ";

    for (int i = 0; i < v1.size() ; i++){
        std::cout << v1.get_at(i) << " ";
    }
    std::cout << std::endl;
    
    return 0;
}