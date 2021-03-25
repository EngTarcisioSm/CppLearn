#include <iostream>
using namespace std;

#ifndef HASHALUNO_H
#define HASHALUNO_H



class Aluno{
    private:
        int ra;
        std::string nome;
    public:
        Aluno();
        Aluno(int ra, std::string nome);
        string getNome() const;
        int getRA()const;
};

#endif