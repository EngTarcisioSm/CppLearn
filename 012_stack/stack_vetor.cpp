#include <iostream>
#include "stack.h"

using namespace std;

//constrututor
Stack::Stack(){
    lenght = 0;
    structure = new ItemType[MAX_ITENS];
}

//Desconstrutor
Stack::~Stack(){
    delete [] structure;
}

//Esta Vazio???
bool Stack::isEmpy() const
{
    return (lenght == 0);
}

//Esta cheio ???
bool Stack::isFull() const
{
    return (lenght == MAX_ITENS);
}

void Stack::push(ItemType item)
{
    if (!isFull()){
        structure[lenght] = item;
        lenght++;
    } else {
        //lança um erro com a mensagem 
        throw "Stack is already full";
    }
}

ItemType Stack::pop()
{
    if(!isEmpy()){
        ItemType aux = structure[lenght -1];
        lenght--;
        return aux;
    } else {
        throw "Stack is empy!";
    }
}

void Stack::print() const
{
    cout << "Stack: ";
    for (int i = 0; i < lenght; i++)
    {
        cout << structure[i];
    }
    cout << endl;
}


