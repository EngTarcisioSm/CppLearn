#include "hash.h"
#include <iostream>

using namespace std;

Hash::Hash(int max){
    length = 0;
    max_items = max;
    structure = new Aluno[max_items];
}

Hash::~Hash(){
    delete []structure;
}

bool Hash::isFull() const{
    return (length == max_items);
}

int Hash::getLengh() const{
    return length;
}

/*
    Dois parametros sendo passados como referência
    Quando alguem chamar esta função, anteriormente terá de passar um objeto do tipo aluno
    Efetua uma busca na tabela hash, se achar o elemento ela colocará o valor dentro do objeto Aluno que foi passado como referencia 
*/
void Hash::retrieveItem(Aluno &aluno, bool &found){

    /*retorna um inteiro com a posição do aluno*/
    int startLoc = getHash(aluno);
    /*vai na estrutura e obtem o objeto que se encontra lá colocando na variavel aux*/
    bool moreToSearch = true;
    int location = startLoc;

    do{
        if (structure[location].getRA() == aluno.getRA() || structure[location].getRA() == -1)
        {
            moreToSearch = false;
        }
        else{
            location = (location +1) % max_items;
        }
    } while(location != startLoc && moreToSearch);

    found = (structure[location].getRA() == aluno.getRA());

    if(found){
        aluno = structure[location];
    }
}

void Hash::insertItem(Aluno aluno){
    int location;
    location = getHash(aluno);
    while(structure[location].getRA() > 0){
        location = (location +1) % max_items;
    }
    structure[location] = aluno;
    length++
}


void Hash::deleteItem(Aluno aluno){
    int startLoc = getHash(aluno);
    bool moreToSearch = true;
    int location = startLoc;

    do{
        if(structure[location].getRA() == aluno.getRA() || structure[location].getRA() == -1){
            moreToSearch = false;
        }
        else {
            location = (location + 1) % max_items;
        }
    } while ((location != startLoc && moreToSearch));

    if(structure[location].getRA() == aluno.getRA() == aluno.getRA()){
        structure[location] = Aluno(-2,"");
        length--;
    }
}

void Hash::print(){
    for (size_t i = 0; i < max_items; i++)
    {
        cout << i << ":" << structure[i].getRA() << "," << structure[i].getNome() << endl
    }
}

/*
    todo aluno possui um RA e esse valor será usado como indice do vetor a função retornar-a um numero que seja menor ou igual a max_itens 
*/
int Hash::getHash(Aluno aluno){
    return aluno.getRA() % max_items;
}