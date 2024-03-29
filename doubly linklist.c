#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};


int main(){
    struct node *head = malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=3;
    head->next=NULL;

    struct node *new = malloc(sizeof(struct node));
    new->prev=NULL;
    new->data=5;
    new->next=NULL;

    
    printf("%d\n",head->data);
    printf("%d\n",new->data);
    return 0;
}