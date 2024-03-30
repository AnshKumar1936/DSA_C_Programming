#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

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


//
int main(){
    struct node *head = malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=3;
    head->next=NULL;

    struct node *new = malloc(sizeof(struct node));
    new->prev=NULL;
    new->data=5;
    new->next=NULL;

    head=addatbeg(head,45);
    head=addatbeg(head,46);
    head=addatbeg(head,47);
    head=addatbeg(head,48);
    head=addatbeg(head,49);
    struct node *ptr=head;

    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;

    }
    return 0;
}