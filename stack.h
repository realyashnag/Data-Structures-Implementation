#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int *arr;
    int top;
    int size;
}stack;

void create_stack(stack *s, int size);
int pop(stack* s);
void push(stack *s, int var);
void print_stack(stack *s);
