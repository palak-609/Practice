#include<stdio.h>
#include<stdlib.h>

struct node midnode(struct node* head)
{
    struct node *t=head, *r=head;
    while(r!=NULL&&r->next!=NULL)
    {
        t=t->next;
        r=r->next->next;
    }
    return t;
}