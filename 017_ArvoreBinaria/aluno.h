
#include <iostream>
using namespace std;

#ifndef ALUNO_H
#define ALUNO_H

class Aluno
{
private:
    int ra;
    std::string nome;
public:
    Aluno(/* args */);
    Aluno(int ra, std::string none);
    string getNome() const;
    int getRa() const;
};


#endif