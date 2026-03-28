#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node* next;
    int coeff;
}node;

 
void traverselist(node* head) {
    node* current = head;
}



int main()
{
    int n1, n2;
    node *p1=(node*)malloc(sizeof(node));
    node *p2=(node*)malloc(sizeof(node));
    node* head1=p1;
    node* head2=p2;
    printf("Enter the size of p1: ");
    scanf("%d",&n1);
    printf("Enter the size of p2: ");
    scanf("%d",&n2);

printf("For P1\n");
    for(int i=0;i<n1;i++)
    {
        printf("Enter coeff of x^(%d): ",i);

        scanf("%d",&p1->coeff);
        p1=p1->next;
    }
    p1->next=NULL;
    
    
printf("For P2\n");
    for(int i=0;i<n2;i++)
    {
        printf("Enter coeff of x^(%d): ",i);
        scanf("%d",&p2->coeff);
        p2=p2->next;
    }
    p2->next=NULL;

    p1=head1;
    p2=head2;

    if(n1>n2)
    {
        
        for(int i=n2;i<n1;i++)
        {
            p1=p1->next;
        }
        for(int i=0;i<n2;i++)
        {
            p1->coeff+=p2->coeff;
            p1=p1->next;
            p2=p2->next;
        }

   traverselist(head1);
    }

    else
    {
        for(int i=n1;i<n2;i++)
        {
            p2=p2->next;
        }
        for(int i=0;i<n1;i++)
        {
            p2->coeff+=p1->coeff;
            p1=p1->next;
            p2=p2->next;
        }
        
   traverselist(head2);
    }

} 