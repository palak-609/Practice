#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int val;
    struct Node* next;
}node;

void insertB(node **head)
{
    int data;
    node* n=(node*)malloc(sizeof(node));
    printf("Enter the data: ");
    scanf("%d",&data);
    n->val=data;
    n->next=(*head);
    (*head)=n;
}

void insertE(node **head)
{
    int data;
    node *t=(*head), *n=(node*)malloc(sizeof(node));
    printf("Enter the data: ");
    scanf("%d",&data);
    n->val=data;
    n->next=NULL;

    if((*head)==NULL)
        (*head)=n;

    else
    {
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=n;
    }

}

void deleteB(node **head)
{
    node* t=(*head);
    
    if((*head)==NULL)
    {
        printf("The list is empty\n");
    }
    
    else
    {
        (*head)=(*head)->next;
        free(t);
    }
}

void deleteE(node **head)
{   
     
    if((*head)==NULL)
    {
        printf("The list is empty\n");
    }

    else if((*head)->next==NULL)
    {
        node* t=(*head);
       (*head)=(*head)->next;
       free(t);
    }
    
    else
    {
    node *t=(*head);
    while(t->next->next!=NULL)
    {
        t=t->next;
    }
    node* t1=t->next;
    t->next=NULL;
    free(t1);
    }
}

node* mnrem(node *head, int m, int n)
{
    
    if((head)==NULL)
    {
        printf("The list is already empty");
    }
    node *t=(head),*p;
    while(t!=NULL)
    {
        for(int i=0;i<m;i++)
        {
            if(t==NULL)
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
            if(t==NULL)
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
    return head;
}

void traverse(node* head)
{
    printf("The list is : ");
    node* temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->val);
        if(temp->next!=NULL) printf(" -> ");
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    node* head=NULL; insertB(&head);insertB(&head);
    insertB(&head);insertB(&head);
    insertB(&head);
    traverse(head);
    traverse(head);
    head=mnrem(head,2,2);
    traverse(head);
}