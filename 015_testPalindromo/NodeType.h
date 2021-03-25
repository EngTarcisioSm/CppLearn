
#include "item_type.h"

#ifndef NODETYPE_H
#define NODETYPE_H
/*
     Estrutura usada para guardar a informação e o endereço do proximo elemento 
*/

struct NodeType
{
     ItemType info;
     NodeType * next;
};
#endif