#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

// struct node add(struct node*(head,int data));

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=28;
	head->link=NULL;
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=20;
	ptr->link=NULL;
    head->link=ptr;


    printf("%d",head->data);
    printf("%d",ptr->data);

//     int data=3;
//     head=add(head,data);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d",ptr->data);
//         ptr=ptr->link;

//     }
//     return 0;
}

// struct node add(struct node*(head,int data))
// {
//     struct node *ptr=malloc(sizeof(struct node));
//     ptr->data=d;
//     ptr->link=NULL;
//     ptr->link=head;
//     head=ptr;
//     return head;
// }