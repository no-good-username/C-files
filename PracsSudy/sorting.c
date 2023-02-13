#include <stdio.h>
#include <stdlib.h>
#define MAX 10  


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

void merge_sort(int arr[], int low, int up){

int mid;
int temp[MAX];
if(low<up){

mid = (low+up)/2;
merge_sort( arr, low , mid );
merge_sort( arr, mid+1, up );
merge( arr, temp, low, mid, mid+1, up );
copy(arr,temp,low, up);

}

}

void merge( int arr[], int temp[], int low1, int up1, int low2, int up2 ){

int i = low1;
int j = low2;
int k = low1 ;
while( (i <= up1) && (j <=up2) ){
if(arr[i] <= arr[j])

temp[k++] = arr[i++] ;

else

temp[k++] = arr[j++] ;

}
while( i <= up1 )

temp[k++]=arr[i++];

while( j <= up2 )

temp[k++]=arr[j++];

}
void copy(int arr[], int temp[], int low, int up ){

int i;
for(i=low; i<=up; i++)
arr[i]=temp[i];

}   



int main(){
    int arr[10] = {0,1,7,3,2,9,4,1,8,5};
    printf("After sort");
    insort(arr);
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
}
