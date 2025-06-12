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
    teste(2,10);
    vector_array v1;
    v1.push_back(20);
    v1.push_back(30);
    std::cout << "v1 tem " << v1.size() 
              << " elementos" << std::endl;
    for (int i = 0; i < v1.size() ; i++){
        std::cout << v1.get_at(i) << " " << std::endl;
    }
    
    
    return 0;
}