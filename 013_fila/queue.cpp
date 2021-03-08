#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue()
{
     front = 0;
     back = 0;
     strucuture = new ItemType[MAX_ITEMS];
}

Queue::~Queue()
{
     delete [] strucuture;
}

bool Queue::isEmpy() const
{
     return (front == back);
}

bool Queue::isFull() const 
{
     return (back - front == MAX_ITEMS);
}

void Queue::enqueue(ItemType item)
{
     if (!isFull()){
          strucuture[back % MAX_ITEMS] = item; //buffer circular
          back++;
     } else {
          throw "Queue is already full";
     }
}

ItemType Queue::dequeue()
{
     if(!isEmpy()){
          front++;
          return strucuture[(front-1) % MAX_ITEMS];
     } else {
          throw "Queue is empy";
     }
}

void Queue::print() const
{
     cout << "Fila = ";
     for (int i = 0; i < MAX_ITEMS; i++)
     {
          cout << strucuture[i % MAX_ITEMS];
     }
     cout << endl;
}