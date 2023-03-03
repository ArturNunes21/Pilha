#include <iostream>

using namespace std;

class pilha{
    private:
    int tamanho,topo, *vetor;

    public:
    pilha(int);
    ~pilha();
    bool pilhaVazia()const;
    bool pilhaCheia()const;
    void empilhar(int);
    int desempilhar();
    int accesar()const;
};

    pilha::pilha(int tamanho):
        tamanho(0),
        topo(-1),
        vetor(0)
    {
        if(tamanho<=0)
            throw string("tamanho invalido");
        try{
            vetor = new int[tamanho];
            this->tamanho = tamanho;
        }catch(std::bad_alloc){
            throw string("nao foi possivel alocar memoria");
        }
    }

    pilha::~pilha(){
        if(vetor)
            delete[] vetor;
       topo == -1
    }

    bool pilha::pilhaVazia()const{
        return (topo == -1);
    }

    bool pilha::pilhaCheia()const{
        return (topo == tamanho-1);
    }

    void pilha::empilhar(int valor){
        if (pilhaCheia()){
            throw string("Pilha ja estacheia.");
        }
        topo++;
        vetor[topo] = valor;
    }

    int pilha::desempilhar(){
        if (pilhaVazia()){
            throw string("Pilha ja vazia.");
        }
        return vetor[topo--];
    }

    int pilha::accesar()const{
        if (pilhaVazia()){
            throw string("Pilha ja vazia.");
        }
        return vetor[topo];
    }













