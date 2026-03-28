#include<stdio.h>
#include<stdlib.h>
typedef struct Qu qu;
struct Qu
{
    int f;
    int r;
    int size;
    int *arr;
};


qu* createqueue(int capacity)
{
    qu* st=(qu*)malloc(capacity*sizeof(qu));
    st->arr=(int*)malloc(capacity*sizeof(int));
    st->f=st->r=-1;
    st->size=capacity;

    return st;
}

void enqueue(qu *q,int item)
{
    if(q->r==q->size-1)
    {
    printf("The queue is full");
    }
    else if(q->f==-1)
    {
        q->f=q->r=0;
        q->arr[q->r]=item;
    }
    else
    {
        q->r++;
        q->arr[q->r]=item;
    }
}

int dequeue(qu *q)
{
    if(q->f<0)
    {
        printf("The queue is empty");
        return -9999;
    }
    else if(q->f==q->r)
    {
        int x=q->arr[q->f];
        q->f=q->r=-1;
        return x;
    }
    else
    {
        int x=q->arr[q->f];
        q->f++;
        return x;        
    }
}

int main()
{
    qu* t=createqueue(4);
    int n;
    enqueue(t,10);
    enqueue(t,20);
    printf("%d",dequeue(t));
    printf("%d",dequeue(t));
    printf("%d",dequeue(t));







}