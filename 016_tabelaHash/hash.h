#include "hashAluno.h"

#ifndef HASH_H
#define HASH_H

class Hash
{
private:
    int getHash(Aluno aluno);
    int max_items;
    int length;
    Aluno *structure; //vetor de objetos aluno
public:
    /*inicia com valor default*/
    Hash(int max_item = 100);
    /*Destrutor para desalocar recursos*/
    ~Hash();
    /*verifica se o numero máximo foi atingido*/
    bool isFull() const;
    /*verific a quantidade de elementos que estão na estrutura*/
    int getLengh() const;

    void retrieveItem(Aluno &aluno, bool &found);
    void insertItem(Aluno aluno);
    void deleteItem(Aluno aluno);
    void print();
};

#endif