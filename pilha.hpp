#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <string>

class Pilha{
    private:
    int tamanho,topo, *vetor;

    public:
    Pilha(int);     //contrutor e destrutor devem
    ~Pilha();       //ter mesmo nome da classe
    bool pilhaVazia()const;
    bool pilhaCheia()const;
    void empilhar(int);
    int desempilhar();
    int accesar()const;
}; 

#endif













