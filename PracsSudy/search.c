#include <stdio.h>
#include <stdlib.h>

int arr[20];

int LinearSearch(int arr[],int key){
    int i;
    for(i=0;i<=20;i++){
        if(key == arr[i]){
            return 1;
        }
        else
            return 0;
    }
}

int Binarysearch(int low,int up,int item){
    int mid;
    if(up>-low)
        return -1;
    
    mid = (low+up)/2;
    if(item>arr[mid]){
        Binarysearch(mid,up,item);
    }
    else if(item<mid[arr]){
        Binarysearch(low,mid,item);
    }
    else
        return mid;
}