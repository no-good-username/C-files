#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

int isEmpty(){
    if(rear==NULL){
        return 1;
    }
    else{
        return 0;

    }
}

void insert(int item){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Stack overflow");
    }
    temp->data = item;
    temp->next = NULL;
    if(front==NULL){
        front = temp;
        rear = temp;
    }
    else{
        rear->next = temp;
        rear = temp;

    }
}

void delete(){
    if (isEmpty()){
        printf("Underflow");
        return;
    }
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp = front;
    front  = front->next;
    free(front);
}

void display(){
    struct node* ptr;
    ptr = front;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr= ptr->next;
    }
}
