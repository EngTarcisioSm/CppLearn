#include <iostream>

int number1;
int number2;

main(){
     std::cout<<"Digite o primeiro numero: ";
     std::cin >> number1; //recebe o numero digitado
     std::cout<<"Digite o segundo numero: ";
     std::cin >> number2;

     int sum = number1 + number2;
     int sub = number1 - number2;
     int mul = number1 * number2;
     int div = number1 / number2;
     float fdiv = (float)number1 / (float)number2;     //divisão com numeros decimais 
     int res = number1 % number2;                      //resto de divisão 

     std:: cout <<"Sum = " << sum << std::endl;
     std:: cout <<"Sub = " << sub << std::endl;
     std:: cout <<"Mul = " << mul << std::endl;
     std:: cout <<"Div = " << div << std::endl;
     std:: cout <<"Fdiv = " << fdiv << std::endl;
     std:: cout <<"Res = " << res << std::endl;
     return 0;
}