#include <iostream>
#include "pilha.hpp"

int main(){

    Pilha p1(5);

    for(int i = 0; i<5; i++){
        p1.empilhar(i*10%2);
        cout << "Empilhando valor = " << p1.acessar() << endl;
    }

    return 0;
}