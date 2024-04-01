#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

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

//
int main()
{
    struct node *head = malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=3;
    head->next=NULL;

    struct node *new = malloc(sizeof(struct node));
    new->prev=NULL;
    new->data=5;
    new->next=NULL;

    head=addatend(head,45);
    head=addatend(head,46);
    head=addatend(head,47);
    head=addatend(head,48);
    head=addatend(head,49);
    struct node *ptr=head;

    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;

    }
    return 0;
}