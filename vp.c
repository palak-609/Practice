#include<stdio.h>
#include<stdlib.h>
typedef struct Stack stack;
struct Stack
{
    int top;
    int size;
    char *ch;
};

stack* createstack(int capacity)
{
    stack* st=(stack*)malloc(capacity*sizeof(stack));
    st->size=capacity;
    st->top=-1;

    st->ch=(char*)malloc(capacity*sizeof(char));
    return st;
}

int isfull(stack* st)
{
    if(st->size-1==st->top)
    return 1;
    else
    return 0;
}

int isempty(stack* st)
{
    if(st->top<0)
    return 1;
    else 
    return 0;
}

void push(stack* st,char n)
{
    if(!isfull(st))
    {
        st->top++;
        st->ch[st->top]=n;
    }
    else
    printf("Stack is full");
}

char pop(stack* st)
{
    if(!isempty(st))
    {
        st->top--;
        return st->ch[st->top+1];
    }
    else
    {
    printf("Stack is empty");
    return '-';
    }
}

int match(char ch,char ch2)
{
    if(ch==')'&&ch2=='(')
    return 1;
    else if(ch=='}'&&ch2=='{')
    return 1;
    else if(ch==']'&&ch2=='[')
    return 1;
    else
    return 0;
}

int main()
{int n,flag=1;
    printf("Enter the size: ");
    scanf("%d",&n);
    stack* t=createstack(5);
    char c[n];
    for ( int i = 0; i < n; i++)
    {
        scanf(" %c",&c[i]);
    }
    for (int i = 0; i < n; i++)
    {
        char ch=c[i];
        if(ch=='('||ch=='{'||ch=='[')
        {
            push(t,ch);
        }
        if(!isempty(t))
        {
            if(ch==')'||ch=='}'||ch==']')
            {
                char ch2=pop(t);
                if(!match(ch,ch2))
                flag=0;
            }
        }
        else
        flag=0;
    }
    if(!isempty(t))
    flag=0;
    if(flag==1)
    printf("VALID");
    else
    printf("INVALID");
    
}
