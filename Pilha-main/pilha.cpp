#include "pilha.hpp"


Pilha::Pilha(int tamanho):
        tamanho(0),
        topo(-1),
        vetor(0)
    {
        if(tamanho<=0)
            throw std::string("tamanho invalido");
        try{
            vetor = new int[tamanho];
            this->tamanho = tamanho;
        }catch(std::bad_alloc){
            throw std::string("nao foi possivel alocar memoria");
        }
    }

    Pilha::~Pilha(){
        if(vetor)
            delete[] vetor;
       topo == -1;
    }

    bool Pilha::pilhaVazia()const{
        return (topo == -1);
    }

    bool Pilha::pilhaCheia()const{
        return (topo == tamanho-1);
    }

    void Pilha::empilhar(int valor){
        if (pilhaCheia()){
            throw std::string("Pilha ja estacheia.");
        }
        topo++;
        vetor[topo] = valor;
    }

    int Pilha::desempilhar(){
        if (pilhaVazia()){
            throw std::string("Pilha ja vazia.");
        }
        return vetor[topo--];
    }

    int Pilha::accesar()const{
        if (pilhaVazia()){
            throw std::string("Pilha ja vazia.");
        }
        return vetor[topo];
    }

    int Pilha::setBinario(int valor){
        int  aux = -1, var, restoFinal;
        
        res = valor;
        var = valor;

        while(res !=1){
            res = res/2;
            tamanho++;
        }

        while(aux != 1 && aux != 0){
            empilhar(var%2);
            aux = var/2;
            var = var/2;
            restoFinal = aux;
        }

        if(restoFinal == 1){
            empilhar(1);
        }
        else{
            empilhar(0);
        }
    }

    int setTamanho(){
        
        int res, tamanho = 0;


        while(res !=1){
            res = res/2;
            tamanho++;
        }
    }