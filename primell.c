#include<stdio.h>
#include<stdlib.h>

int prime(int n)
{ if(n>=0)
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            return 0;
        }
    return 1;
    }
    else
    {
    printf("Invalid");
    }
}

int main()
{
    if(prime(15))
    printf("Prime");
    else
    printf("Not Prime");
}