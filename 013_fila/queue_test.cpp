
#include <iostream>
#include "queue.h"

using namespace std;

int main()
{    
     char character;
     char queueChar;
     Queue queue;

     cout << "Enter a string; press return." << endl;
     cin.get(character);

     while((character != '\n') || (!queue.isFull()))
     {
          queue.enqueue(character);
          cin.get(character);
     }
     while (!queue.isEmpy())
     {
          queueChar = queue.dequeue();
          cout << queueChar;
     }
     cout << queueChar;
     
     return 0;
}