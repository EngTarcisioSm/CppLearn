#include <iostream>

int number1;
int number2;

main(){
     std::cout<<"Digite o primeiro numero: ";
     std::cin >> number1; //recebe o numero digitado
     std::cout<<"Digite o segundo numero: ";
     std::cin >> number2;

     //quando a estrutura if tem apenas uma unica linha as chaves podem ser omitidas 
     if(number1 == number2)
          std::cout << number1 << "==" << number2 << std::endl;
     if(number1 != number2)
          std::cout << number1 << "!=" << number2 << std::endl;
     if(number1 < number2)
          std::cout << number1 << "<" << number2 << std::endl;
     if(number1 > number2)
          std::cout << number1 << ">" << number2 << std::endl;
     if(number1 >= number2)
          std::cout << number1 << ">=" << number2 << std::endl;
     if(number1 <= number2)
          std::cout << number1 << "<=" << number2 << std::endl;
     return 0;
}