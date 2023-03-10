#include <iostream>
#include "pilha.hpp"

int main(){

    int aux, valor;

    Pilha p1(50);

    std::cout << "Insira um valor na base 10 para ser convertido = ";
    std::cin >> valor;
  
    p1.setBinario(valor);

    std::cout << "O valor em binario é = ";
  // eu vou colocar uma negação na linha de baixo.
    while(p1.pilhaVazia())
      {
        std::cout << p1.desempilhar() << std::endl;
      }

    return 0;
}