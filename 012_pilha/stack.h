#include "itemtype.h"

class Stack
{
private:
     int lenght;
     ItemType * struct;
     
public:
     Stack(/* args */);  //construtor -cria instancias do objeto
     ~Stack(); //desaloca memoria caso o objeto tenha sido criado de forma dinamica ou sair do espcopo 
     bool isEmpy() const;
     bool isFull() const;
     void print() const;

     void push(ItemType);
     ItemType pop(); 
};

Stack::Stack(/* args */)
{
}

Stack::~Stack()
{
}
