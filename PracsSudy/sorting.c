#include <stdio.h>
#include <stdlib.h>



int insort(int arr[]){
    int i,k,j;
    for(i=1;i<10;i++){
        k = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>k){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }
}

int mergesort(){
    int low1;
}

int main(){
    int arr[10] = {0,1,7,3,2,9,4,1,8,5};
    printf("After sort");
    insort(arr);
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
}
