#include<stdio.h>
// sorting program
void bub(int arr[], int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
               //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sel(int arr[], int n){

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;  
            }
        }

        if(min!=i){
            //swap
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

void ins(int arr[], int n){

    for(int i=1;i<n;i++){
        int k=arr[i];
        int j=i-1;

        while(j>0 && arr[j]>k){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1]=k;
    }
}


int main(){
    int arr[]={2,6,3,1,7,10,8,4,9,5},n=10;
    bub(arr,n);
    printf("Bubble Sort: ");    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    sel(arr,n);
    printf("Selection Sort: "); 
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    ins(arr,n);
    printf("Insertion Sort: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;


}