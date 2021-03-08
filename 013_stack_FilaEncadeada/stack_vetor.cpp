#include <iostream>
#include "stack.h"

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

//parei em 13:56