#include <iostream>

using namespace std;
//11 - definição de tamanho de vetor
const int NUM_ELEMEN = 10;



//15 passando vetores para uma função 

//15a.1 - função recebe ponteiro e internamente muda o endereço para o qual o ponteiro estava apontando e insere um novo valor 
void valor_alocado_memoria(int *p)
{
     p = new int;
     *p = 7;
}












int main()
{
     //1 forma mais simples de estruturar dados na memoria 

     //2 todos componentes devem ser de alpenas um unico tipo 

     //3 o tamanho do vetor é colocado junto na sua declaração 

     //4 seu tamanho não varia ao longo do código 

     //5 elementos ocupam regiões consecutivas de memoria 

     //6 acesso a seus membros em tempo fixo para cada elemento 

     //7 declatação tipo e nome 
     int c[10];

     //8 é possivel declarar e inicalizar um vetor ao mesmo tempo, podendo inicializa-lo totalmente ou parcialmente, esta inicialização se da em chaves  
     int d[10] = {10,0,14};//outros termos serão inicializados com zero  

     for(int i = 0; i < 10; i++)
          cout << d[i] << endl;

     //9 para acessar um item do vetor utilize a sintese de colchetes, nomeVetor[numero]

     //10 vetores em c++ são zero indexados

     //é possivel definir um vetor sem um numero definido de valores, entrando a quantidade de valores inicializados , a quantidade, definirá a quantidade espaço no vetor por 
     int e[] = {13, 50, 30};//terá tamanho 3
     

     //11 - por questões de legibilidade de código é interessante definir o tanho do vetor através de uma definição no inicio do código 
     int f[NUM_ELEMEN];

     //12 - Alocação dinamica de vetores
     //vetores são ponteiros
     int *g = new int[NUM_ELEMEN];
     //feita a alocação dinamica ou estática o uso do vetor não muda, é a mesma 
     //ex
     for(int i = 0; i < NUM_ELEMEN; i++)
          g[i] = 2 * i;
     for(int i = 0; i < NUM_ELEMEN; i++)
          cout << g[i] << endl;
     
     //13 - desalocação dinamica de vetor 
     delete [] g;

     //14 - vetores são ponteiros, onde a variavel que a define guarda o endereço da primeira posição do ponteiro

     //15a.2 - explicação la em cima, aqui só a execução
     int val = 1;
     cout << "valor de val: " << val << "endereço de val: " << &val << endl;
     valor_alocado_memoria(&val);
     cout << "(new) valor de val: " << val << "(new) endereço de val: " << &val << endl;
     //função não causou alteração nenhuma na variavel, o que ocorre é que quando é passado um ponteiro para uma função, a função recebe o endereço daquele parametro, caso ela resolva modificar o endereço que ela recebeu e modifique o valor nessa posição de memoria nova isso não modificará a variavel que foi dada como parametro, esta função acima não consegue desalocar o endereço da variavel externamente, isso apenas ocorre dentro do escopo do código.

     //parei em 14:22











     return 0;
}


