#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
} *top=NULL;

int isEmpty(){
    if(top == NULL)
        return 1;
    else
        return 0;
}

void push(int item){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Stack overflow");
    }
    temp->data = item;
    temp->next = top;
    top = temp;
}


int pop(){
    if(isEmpty()){
        printf("Stack empty");
    }
    int item;
    struct node* temp;
    item = top->data;
    temp = top;
    top = temp->next;
    temp->next = NULL;
    free(temp);
    return item;
}

void display(struct node* start){
    struct node* ptr = start;
    if(start == NULL){
        printf("List is empty");
        return;
    }
    while(ptr!= NULL){
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    int m,item;
    m=1;
    while(m){
        printf("ENter m");
        scanf("%d",&m);
        switch(m){
        case 1:

            printf("Enter the item to be pushed: ");
            scanf("%d",&item);
            push(item);
            break;
        case 2 :

            pop();
            break;
        case 4 :

            display(top);
            break;
        case 5 :
            exit(1);
        default :

            printf("Wrong choice\n");
        }
    }
}