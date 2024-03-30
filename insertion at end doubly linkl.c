#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

//function to add at begining....
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

//function to add at ending.....
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

struct node* addafterpos(struct node* head,int data,int position){
    struct node*newp=NULL;
    struct node*temp=data;
    struct node*temp2=NULL;
    //newp=addtoempty(new,data);
    while(position!=1){
        temp=temp->next;
        postion--;
    }
    if(temp->next=NULL){
        temp->next=newp;
        newp->prev=temp;
    }
    temp2=temp->next;
    temp->next=newp;
    temp2->prev=newp;
    newp->next=temp2;
    newp->prev=temp;
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

    head=addatbeg(head,45);
    head=addatbeg(head,46);
    head=addatbeg(head,47);
    head=addatbeg(head,48);
    head=addatbeg(head,49);

    head=addatend(head,45);
    head=addatend(head,46);
    head=addatend(head,47);
    head=addatend(head,48);
    head=addatend(head,49);

    head=addafterpos(head,25,position);
    head=addafterpos(head,26,position);
    head=addafterpos(head,27,position);

    struct node *ptr=head;

    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;

    }
    return 0;
}