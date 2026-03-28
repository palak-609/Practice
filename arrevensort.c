#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=6,ar[]={9,2,66,33,5,8};
    for(int i=0;i<n-1;i+=2)
    {
        for(int j=0;j<=n-1;j+=2)
        {
            if(ar[j] > ar[j+2])
            {
                int t=ar[j];
                ar[j]=ar[j+2];
                ar[j+2]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }   
    printf("\n");
}