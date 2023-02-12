#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int q_arr[MAX];
int front = -1;
int rear = -1;

int isEmpty(){
        if(front == -1)
            return 1;
        else
            return 0;
}

int isFull(){
    if((rear == front -1 ) || (front == 0 && rear == MAX-1))
        return 1;
    else 
        return 0;
}

void push(int item){
    if(isFull()){
        printf("Siuu");
        return;
    }

    if(front ==-1)
        front = 0;
        
    else if(rear == MAX-1)
        rear = 0;
    else
        rear++;
    q_arr[rear] == item;
}

int delete(){
    int item;
    if(isEmpty()){
        printf("Underflow");
    }
    if(front == MAX-1)
        front = 0;
    else if(front == rear){
        front = -1;
        rear = -1;
    }
    else
        front = front+1;
    item = q_arr[rear];
    return item;
}

void display (){
    int i;
    if(isEmpty()){
        printf('Queue is empty\n');
        return ;
        }

    if(front>=rear){
        i = front;
        while(i<rear){
            printf("%d",q_arr[i]);
            i++;
        }
    }
    else{
        while(i<=MAX-1){
            printf("%d",q_arr[i]);
            i++;
        }
        i=0;
        while(i<=rear){
            printf("%d",q_arr[i]);
            i++;
        }
    }
}   