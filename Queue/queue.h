#include "header.h"
#define NONE -1

int queue_isfull(queue *q)
{
    if ((q->peeche ==  q->size-1 && q->aage == 0) || (q->aage == q->peeche+1))
    {
        return 1;
    }
    return 0;
}

int queue_isempty(queue *q)
{
    if (q->peeche == q->aage)
    {
        if (q->peeche == -1)
        {
            return 1;
        }
    }
    return 0;
}

void create_queue(queue *q, int size)
{
    q->arr = (int*)malloc(sizeof(int)*size);
    q->size = size;
    q->aage = -1;
    q->peeche = -1;
}

void enque(queue *q, int var)
{
    if (queue_isfull(q))
    {
        printf("\nError : The queue is full!");
    }
    else
    {
        if (q->peeche == q->size-1 && q->aage!=0)
        {
            q->peeche = -1;
        }

        q->arr[++q->peeche] = var;

        if (q->aage==-1)
        {
            q->aage = 0;
        }
    }
}

int deque(queue *q)
{
    if (queue_isempty(q))
    {
        printf("\nError : The queue is empty!");
        return -1;
    }
    else
    {
        int var = q->arr[q->aage];
        q->arr[q->aage++] = NONE;

        if (q->aage == q->size)
        {
            q->aage=0;
        }

        if (q->aage-1 == q->peeche || (q->aage==0) && (q->peeche == q->size - 1))
        {
            q->aage=q->peeche=-1;
        }
        return var;
    }
}

void print_queue(queue q)
{
    if (queue_isempty(&q))
    {
        printf("\nError : The queue is empty!");
    }
    else
    {
        int temp=q.aage;
        printf("\nBack -> ");
        while (temp!=q.peeche+1 || (temp==0 && q.peeche == q.size-1))
        {
            if (temp == q.size)
            {
                temp = 0;
            }
            printf("%d ", q.arr[temp++]);
        }
        printf("<-- Front\n");
    }
}
