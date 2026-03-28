#include<stdio.h>
#include<stdlib.h>

typedef struct node*
{
    int data;
    struct node* next;
}node;

int seedha(node* head1, node* head2)
{
    int a=0,b=0,r;
    node *t1=head1, *t2=head2;

    while(t2!=NULL)
    {
    r=(t1->data-t2->data)+b;
    if(r<0)
    {
        r+=10;
        b=-1;
    }
    a=(a*10)+r;
    t1=t1->next;
    t2=t2->next;
    }

    while(t1!=NULL)
    {
        r=t1->val+b;
        a=(a*10)+r;
        t1=t1->next;
    }

    return a;
}



int main()
{
    node *n1, *n2;
    printf("Enter n1: ");

}   