#include "item_type.h"
#include "NodeType.h"


class Stack
{
private:
     //apenas ocorreu mudança aqui 
     NodeType * structure;
public:
     Stack();  //Construtor
     ~Stack(); //Destrutor
     bool isEmpy() const;
     bool isFull() const;
     void print() const;

     void push(ItemType);
     ItemType pop();
};

