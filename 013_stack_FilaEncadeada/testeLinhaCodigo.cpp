#include "stack.h"
#include <iostream>

using namespace std;

/*
     Testa suposto código verificando se ocorreu devidamente abertura e fechamento de {} () []
*/

int main(){
     Stack stack;
     ItemType character;
     ItemType stackItem;

     cout << "Insira uma string" << endl;
     cin.get(character);

     bool isMatched = true;

     while (isMatched && character != '\n')
     {
          if(character == '{' || character == '(' || character == '['){
               stack.push(character);
          }
          if(character == '}' || character == ')' || character == ']'){
               if(stack.isEmpy()){
               isMatched = false;
               } else {
                    stackItem = stack.pop();
                    isMatched = ( (character == '}' && stackItem == '{') ||
                                  (character == ')' && stackItem == '(') ||
                                  (character == ']' && stackItem == '['));
               }
          }
          cin.get(character);
     }
      if(isMatched && stack.isEmpy()){
          cout << "Bem Formada \n";
      } else {
          cout << "Mal formada \n";
      }
      cout << endl;





     return 0;
}