#include <iostream>

using namespace std;


int main()
{
     //(1) ponteiros são criados a partir da indicação do tipo de valor para o qual o mesmo irá apontar
     //tipo *nomePonteiro;
     int * intPointer;
     //(2) como o ponteiro acima não foi inicializado seu valor é dado como undefined
     cout << "valor intPointer: " << intPointer << " valor interno: " << *intPointer << endl;
     //não é possivel saber de antem]ão o valor inserido em um ponteiro que não foi inicializado
     //(3) O ponteiro acima inPointer foi alocado de forma estatica, ou seja, em tempo de compilação, alocado então na stack 

     //(4) a inicialização de um ponteiro de forma estática se da a partir do momento em que se passa o endereço de uma variavel para este com auxilio do operador & 
     int alpha;
     int *intPointer2;
     intPointer2 = &alpha;
     //(4) A partir desse momento intPointer2 estára apontando para o mesmo endereço de memoria de alpha
     cout << "endereco que o ponteiro intPointer2 aponta: " << intPointer2 << " endereco da variavel alpha: " << &alpha << endl;

     //(5) Os operadores new e delete são utilizados para efetuar alocação e desalocação de memória respectivamente
     //Importante, toda vez que uma memoria for alocada dinamicamente(new), em algum ponto do programa ela deve ser desalocada (delete)
     int * intPointer3;
     intPointer3 = new int;
     cout << "endereco de intPointer3: "<< intPointer3 << " valor armazenado no endereco de intPointer3: "<< *intPointer3 << endl;
     delete intPointer3;
     cout << "endereco de intPointer3 deletado: "<< intPointer3 << " valor armazenado no endereco de intPointer3 deletado: "<< *intPointer3 << endl;

     //(6) Para inserir conteudo em um endereço de ponteiro e para ler o conteudo de um endereço de ponteiro utiliza-se '*'
     int valor = 25;
     int * intPointer4;
     cout <<"endereco de intPointer4: " << intPointer4 << " conteudo de intPointer4: "<< *intPointer4 << endl;

     *intPointer4 = valor;
     
     cout <<"endereco de intPointer4(new): " << intPointer4 << " conteudo de intPointer4(new): "<< *intPointer4 << endl;

     //não recomenda-se definir um vetor sem incia-lo para isso pode ser definido como vazio, para tal deve-se usar a palavra NULL 
     //bool *intPointer5 = NULL;
     //float *intPointer6 = NULL;
     //cout << "endereço de intPointer5: " << intPointer5 << " valor do conteudo intPointer5: " << *intPointer5 << endl;
     //cout << "endereço de intPointer6: " << intPointer6 << " valor do conteudo intPointer6: " << *intPointer6 << endl;
     
     
     
     
     cout << "teste" << endl;
     return 0;
}