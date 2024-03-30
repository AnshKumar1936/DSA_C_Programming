#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;

};

struct node * addatempty(struct node* head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;

}

struct node * addatbeg(struct node* head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;

}

struct node * addatend(struct node* head , int data){
    struct node *temp,*tp;
    temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp=head;
    while(tp->next !=NULL)
          tp=tp->next;
    tp->next=temp;
    temp->prev=tp;
    return head;
}

struct node *createlist(struct node *head){
    int n , data;
    printf("enter tne number of elements\n");
    scanf("%d",&n);
    if(n==0){
        return head;
    }   

    printf("enter the elements for the nodes\n");
    scanf("%d",&data);
    head=addatempty(head,data);

    for(int i=1;i<n;i++){
        printf("enter the elements for the nodes\n",i+1);
        scanf("%d",&data);
        head=addatend(head,data);
    }
    return head;
}

int main(){
    struct node* head=NULL;
    struct node*ptr;
    head=createlist(head);
    ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;

    }
    return 0;
}


