#include<stdio.h>
#include<stdlib.h>

struct node* deldup(struct node* head)
{
    if(head==NULL)
    {
        printf("The list is empty");
        return head;
    }
    else
    {
    struct node *t=head;
    while(t->next!=NULL)
    {
        if(t->data==t->next->data)
        {
            t->next=t->next->next;
        }
        else
        {
            t=t->next;
        }
    }
    return head;
    }
}