#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack(){
     /*
          Inicializa o ponteiro do topo da pilha como nulo 
     */
     structure = NULL;
}

Stack::~Stack(){
     /*
          A deleção é efetuada da seguinte forma:
          1- É criada um ponteiro de estrutura temporário;
          2- É criado uma estrutura while que varre toda a lista tendo o valor de cada nó sendo diferente de NULL
          3- Structure é um ponteiro de nó que aponta para a primeira posição do nó que é copiado para tempPtr
          4- Structure aponta para o proximo ponteiiro ponteiro
          5- o endereço para o qual tempPtr aponta é desalocado, o processo é feito até que o proximo nó seja igual a NULL
     */
     NodeType * tempPtr;
     while (structure != NULL)
     {
          tempPtr = structure;
          structure = structure->next; //como structure já é um ponteiro utiliza-se -> para acessar o componente 
          delete tempPtr;
     }
}

bool Stack::isEmpy() const{
     /*
          Verifica se o ponteiro esta vazio indicando que a pilha esta vazia 
     */
     return (structure == NULL);
}

bool Stack::isFull() const{
     /*
          Verifica se a pilha esta cheia testando a possibilidade de criar um novo nó caso positivo detela o reteste e retorna falso para indicar que não esta vazio 
     */
    NodeType * location;
    try
    {
         location = new NodeType;
         delete location;
         return false;
    }
    catch(std::exception exception)
    {
         return true;
    }
    
}

void Stack::push(ItemType item){
     /*
          i   - Verifica se a pilha esta cheia 
          ii  - cria um ponteiro do tipo NodeType
          iii - inicializa o ponteiro com new
          iv  - o item passado como parametro é adicionado ao endereço em location->info 
          v   - location->next aponta para a structure 
          vi  - structure aponta para o ultimo location inserido 
          vii - caso esteja cheia a pilha retorna uma mensagem de erro 
     */
     if(!isFull()){
          NodeType* location;
          location = new NodeType;
          location->info = item;
          location->next = structure;
          structure = location;
     } else {
          throw "Stack is already full!";
     }
}

ItemType Stack::pop(){
     /*
          é coletado o valor do ultimo elemento, faz o ponteiro apontar para o penultimo elemento, o ultimo elemento é deletado e o penultimo elemento vira o ultimo elemento  
     */
     
     if(!isEmpy()){
          NodeType* tempPtr;                 //Criado um ponteiro temporario
          tempPtr = structure;               //O ponteiro da ultima posição é copiado oara o ponteiro temporario 
          ItemType item = structure->info;   //o conteudo da ultima posição é coletado 
          structure = structure->next;       //structure passa a apontar para o penultimo item 
          delete tempPtr;                    //deleta o ultimo item e o penultimo passa a ser o ultimo 
          return item;
     } else {
          throw "Stack is empy!";            //mensagem de erro caso a pilha esteja vazia 
     }
}

void Stack::print() const {
     NodeType* tempPtr = structure;
     while(tempPtr != NULL){
          cout << tempPtr->info;
          tempPtr = tempPtr->next;
     }
     cout << endl;
}