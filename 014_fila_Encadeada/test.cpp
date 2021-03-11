#include "queueEncadeada.h"
#include <iostream>

using namespace std;

int main(){
     ItemType character;
     Queue queue;
     ItemType queueChar;

     cout << "Adicione uma String. " <<endl;
     cin.get(character);
     while(character != '\n'){
          queue.enqueue(character);
          cin.get(character);
     }
     while(!queue.isEmpty()){
          queueChar = queue.dequeue();
          cout << queueChar;
     }
     cout << endl;
}