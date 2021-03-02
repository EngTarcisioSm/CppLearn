 #include "item_type.h"

const int MAX_ITENS = 100;

 class Stack
 {
 private:
    int lenght;
    ItemType * structure;  
 public:
    Stack();    //construtor - cria instancias do objeto 
    ~Stack();   //desconstrutuor - chamado para desalocar as memorias quando o delete é chamado para desalocar este tipo de objeto (sendo ele alocado de forma dinamica)
    bool isEmpy() const; //indica se esta vazio 
    bool isFull() const; //indica se esta cheio
    void print() const; //printa a stack 

    void push(ItemType); //inclui um elemento 
    ItemType pop(); //retira um elemento da pilha      
 };
 
 //Pilha é algo bastante util principalmente quando se necessita de alinhamento de componentes em processo 

 //Implementado sobre o estrutura de vetor 

 //A posição do topo da pilha depende do numero de elementos na pilha 

 //Inserções e remoções deve ocorrer em tempo constante  independente do numero de estruturas