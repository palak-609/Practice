#include<stdio.h>

void merge(int arr[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[50];

    while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            b[k]=arr[i];
            k++;
            i++;
        }
        else{
            b[k]=arr[j];
            k++;
            j++;
        }
    }

    if(i>mid){
        while(j<=ub){
            b[k]=arr[j];
            j++;
            k++;
        }
    }

    else{
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }

    for(int z=lb;z<=ub;z++){
        arr[z]=b[z];
    }

}

int ms(int arr[], int lb, int ub){

    if(lb<ub){
        int mid=(lb+ub)/2;
        ms(arr,lb,mid);
        ms(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main(){
    int arr[50],n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    ms(arr,0,n-1);

    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
