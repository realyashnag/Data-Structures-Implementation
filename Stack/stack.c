#include "stack.h"
void create_stack(stack *s, int size)
{
    s->arr = (int*)malloc(sizeof(int)*size);
    s->size = size;
    s->top = -1;
}

int pop(stack* s)
{
    if (s->top < 0)
    {
        printf("\nError : Stack is empty!");
        return -1;
    }
    else
    {
        return s->arr[s->top--];
    }
}

void push(stack *s, int var)
{
    if (s->top+1 >= s->size)
    {
        printf("\nError : Stack is full!");
    }
    else
    {
        s->arr[++s->top] = var;
    }
}

void print_stack(stack *s)
{
    int i=0;
    printf("\nStack : \n");
    for (i=s->top; i>=0; i--)
    {
        printf("|%d|\n", s->arr[i]);
    }
    printf("|_|\n");
}
