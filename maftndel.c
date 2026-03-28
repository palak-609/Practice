#include<stdio.h>
#include<stdlib.h>

node* mnrem(node **head, int m, int n)
{
    
    if((*head)==NULL)
    {
        printf("The list is already empty");
    }
    node* t=(*head),*p;
    while(t->next!=NULL)
    {
        for(int i=0;i<m;i++)
        {
            if(t->next=NULL)
            {
                break;
            }
            else
            {
                p=t;
                t=t->next;
            }
        }

        for(int j=0;j<n;j++)
        {
            if(t->next==NULL)
            {
                break;
            }
            else
            {
                p->next=t->next;
                t=t->next;
            }
        }
    }
}