#include <stdlib.h>
#include <stdio.h>

#define NewStack createNewStack()

typedef int data;

typedef struct NODE{
    data value;
    struct NODE *next;
} Node;


Node * createNewStack(){
    return (Node *)malloc(sizeof(Node));
}


int main(){
    Node *stack = NewStack;
    stack->value = 10;
    printf("%d\n",stack->value);
}