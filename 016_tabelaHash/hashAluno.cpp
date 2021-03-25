#include "hashAluno.h"

Aluno::Aluno(){
    /*indica a primeira posição da tabela hash como uma posição vazia*/
    this->ra = -1;
    this->nome = "";
};

Aluno::Aluno(int ra, std:string nome){
    this->ra = ra;
    this->nome = nome
}

string Aluno::getNome() const{
    return nome;
}

int Aluno::getRA() const{
    return ra;
}