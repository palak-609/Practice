#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int data;
    struct Node* next;
};

void push(node **head,int n)
{
    node* ptr=(node*)malloc(sizeof(node));
    ptr->data=n;
    ptr->next=(*head);
    *head=ptr;
}



int pop(node **head)
{

    int t;
    if((*head)==NULL)
    printf("The list empty");
    else
    {
        t=(*head)->data;
        (*head)=(*head)->next;
        return (t);
    }
}

int main()
{
    node* head=NULL;
    print("");
    push(&head,10);
    push(&head,20);
    printf("%d",pop(&head));
    printf("%d",pop(&head));
}