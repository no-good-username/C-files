#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};


struct node* addatbeg(struct node* start,int data){
    struct node* temp;
    printf("SS");
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = start;
    start = temp;
    return start;
}

struct node* addatend(struct node*start,int data){
    struct node* temp,*ptr;
    printf("s");
    temp = (struct node*)malloc(sizeof(struct node));
    ptr = start;
    printf("s");
    while(ptr->next!= NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->data= data;
    temp->next = NULL;
    return start;
}

struct node* createnew(struct node* start){
    int i,n,item;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter element");
    scanf("%d",&item);
    start = addatbeg(start,item);
    for(int i=2;i<=n;i++){
        printf("Enter elemetn");
        scanf("%d",&item);
        start = addatend(start,item);
    }
    return start;
}

struct node* addpos(struct node* start,int position,int data){
    struct node* temp,*ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    ptr = start;
    int count=0;
    while(position-1 != count){
        ptr = ptr->next;
        count++;
    }
    temp->data = data;
    temp->next = ptr->next;
    ptr->next = temp;
    return start;
}

struct node* delpos(struct node* start,int position,int data){
    struct node* temp,*ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    ptr = start;
    int count=0;
    while(position-1 != count){
        ptr = ptr->next;
        count++;
    }
    temp = ptr->next;
    ptr->next = temp->next;
    temp->next = NULL;
    free(temp); 
    return start;
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

struct node* copyList(struct node* start)
{
    if (start == NULL) {
        return NULL;
    }
    else {
  
        
        struct node* newNode = (struct node*)malloc(sizeof(struct node));
  
        newNode->data = start->data;
  
        
        newNode->next = copyList(start->next);
  
        return newNode;
    }
}


int main(){
    struct node* start = NULL;
    struct node* new=NULL;
    int m=1;
    int data,pos;
    while(m){
        printf("Enter value m");
        scanf("%d",&m);
        switch(m){
            case 1:
                start = createnew(start);
                break;
            case 2:
                display(start);
                break;
            case 3:
                printf("Enter position and data");
                scanf("%d%d",&pos,&data);
                addpos(start,pos,data);
                break;
            case 4:
                printf("Enter position");
                scanf("%d",&pos);
                delpos(start,pos,data);
            case 5:
                new = copyList(start);
                display(new);
        }
    }
}