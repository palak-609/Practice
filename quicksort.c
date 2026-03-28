#include<stdio.h>

void quick(int a[], int l, int h){
    if(l<h)
    {
    int m=part(a,l,h);
    quick(a,l,m-1);
    quick(a,m+1,h);
    }
}

int part(int a[], int l, int h){
    int p=a[h];
    int i=l, j=h-1;

    while(i<=j)
    {
        while(a[i]<=p && i<=h) i++;
        while(a[j]>p && j>=l) j--;
        if(i<j) swap(&a[i],&a[j]);
    }
    swap(&a[i],&a[h]);
    return i;
}