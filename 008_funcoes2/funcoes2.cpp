#include <iostream>
using namespace std;

// A função é do tipo void, não tendo retorno algum
//os parametros foram passados por valor, ou seja, apenas uma cópia será feita dos parametros a e b
//dentro do escopo da função a e b não tem vinculo com os parametros de entrada fora da função, qualquer alteração em a e b não impactará nos valores de a e b externamente
void troca_por_valor(int a, int b){
     int temp = a;
     a = b;
     b = temp;
}

int main(){
     int a = 2, b = 3;
     cout << "antes: a = " << a << " b = " << b << endl;
     //chamando a função passando os dois parametros solicitados, que não necessariamente necessitavam de ter o mesmo nome 
     troca_por_valor(a,b);
     cout << "Depois: a = " << a << " b = " << b << endl;
     return 0;
}
