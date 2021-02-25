#include <iostream>

int number1;
int counter = 0;
int amount = 0;

main(){
     while (counter <10)
     {
          std::cout << "Digite um numero (" << counter << ")" << std::endl;
          std::cin >> number1;

          if(number1 < 5){
               amount++;
          }
          counter++;
     }
     
     return 0;
}