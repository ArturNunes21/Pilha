#include <iostream>
#include "pilha.hpp"

int main(){

    int aux;

    Pilha p1(5);

    for(int i = 0; i<5; i++){
        p1.empilhar(i+1);
        std::cout << "Empilhando valor = " << p1.accesar() << std::endl;
    }

    std::cout << "Desempilhando...\n";

    while(!p1.pilhaVazia()){
       aux = p1.desempilhar();
       std::cout << "Valor desempilhado = " << aux << std::endl;
    }

    return 0;
}