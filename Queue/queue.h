#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int *arr;
    int aage;
    int peeche;
    int size;
}queue;

int queue_isfull(queue *q);
int queue_isempty(queue *q);
void create_queue(queue *q, int size);
void enque(queue *q, int var);
int deque(queue *q);
void print_queue(queue q);
