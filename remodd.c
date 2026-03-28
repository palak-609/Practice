#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node {
    int data;
    struct Node* next;
};

node* remodd(node *head)
{    
    node* t=(head);
    while(t->next!=NULL)
    {
        if(head->data%2!=0)
        {
        node *temp=head;
        head=head->next;
        free(temp);
        t=head;
        }

        else if(t->next->data%2!=0)
        {
            node* a=t->next;
            t->next=t->next->next;
            free(a);
        }

        else
        t=t->next;
    }
    return head;
}

void traverseList(node* head) {
    node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    int n, data;
    printf("Enter the no. of nodes: ");
    scanf("%d",&n);

    node* head=NULL;
    node* current = NULL;

    for(int i=0;i<n;i++)
    {
        printf("Enter the data for node %d: ",i);
        scanf("%d",&data);

        node* newnode=(node*)malloc(sizeof(node));
        newnode->data=data;
        newnode->next=NULL;

        if (head==NULL)
        {
            head=newnode;
            current=head;
        }
        else
        {
            current -> next = newnode;
            current = current -> next;
        }
    }


    head=remodd(head);
    traverseList(head);

}