
#include "item_type.h"
#include "NodeType.h"

#ifndef QUEUEENCADEADA_H
#define QUEUEENCADEADA_H

class Queue
{
private:
     NodeType* front; //parte da frente 
     NodeType* rear;  //parte de trás  
public:
     Queue();  //Construtor
     ~Queue(); //Destrutor
     bool isEmpty() const;
     bool isFull() const;
     void print() const;

     void enqueue(ItemType);
     ItemType dequeue();
};
#endif
