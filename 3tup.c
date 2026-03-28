#include<stdio.h>

int main()
{
    int x,y,nz;
    printf("Enter the no.of rows and columns:\n");
    scanf("%d %d",&x,&y);
    printf("Enter the no.of nonzero elements: ");
    scanf(" %d",&nz);
    printf("nz:%d\n",nz);
    int arr[(nz+1)][3];
    arr[0][0]=x;
    arr[0][1]=y;
    arr[0][2]=nz;

    printf("Enter the sparse matrix in 3-tuple form:\n");
    for(int i=1;i<=nz;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //0-1
    for(int i =0;i<=nz;i++)
    {
        int t=arr[i][0];
        arr[i][0]=arr[i][1];
        arr[i][1]=t;
    }

int a,b,c;
    for(int i =1;i<=nz;i++)
    {
        for(int j=i+1;j<nz+1;j++)
        {
            if(arr[i][0]>arr[j][0])
            {
                a=arr[j][0];
                arr[j][0]=arr[i][0];
                arr[i][0]=a;

                b=arr[j][1];
                arr[j][1]=arr[i][1];
                arr[i][1]=b;

                c=arr[j][2];
                arr[j][2]=arr[i][2];
                arr[i][2]=c;

            }
        }
    }

    for(int i=0;i<=nz;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return(0);
}