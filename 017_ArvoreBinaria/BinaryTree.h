#include "aluno.h"

#ifndef BINARYTREE_H
#define BINARYTREE_H

/*
    Estrutura usada para guardar a informação e os endereços das subarvores
*/
struct NodeType{
    Aluno aluno;
    NodeType *left;
    NodeType *Right;
};

class BinaryTree
{
private:
    /* data */
public:
    BinaryTree(/* args */);
    ~BinaryTree();
};




#endif