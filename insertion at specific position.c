#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

int main()
{
    struct node * head=malloc(sizeof(struct node));
    head->data=2;
    head->link=NULL;

    struct node * new=malloc(sizeof(struct node));
    new->data=10;
    new->link=NULL;
    head->link=new;

    struct node * new1=malloc(sizeof(struct node));
    new1->data=28;
    new1->link=NULL;
    head->link->link=new1;

    struct node * ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    return 0;

    // printf("%d",new1->data);
}

void add_at_pos(struct node * head , int data, int pos)
{
    struct node *ptr=head;
    struct node *ptr2=malloc(sizeof(struct node));
    ptr->data=99;
    ptr->link=NULL;

    pos--;

    while(ptr != 1)
    {
        ptr=ptr->link;
        pos--;

    }

    ptr2->link = ptr->link;
    ptr->link = ptr2;

}