#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

void tis(struct node *head, int data){
    struct node *ptr;
    struct node *temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof( struct node ));
    temp->data=data;
    temp->link=NULL;

    while(ptr->link!=NULL){
        ptr=ptr->link;

    }
    ptr->link=temp;
    printf("%d",temp->data);

}
int main()
{
    
    struct node *head=malloc(sizeof(struct node));
    head->data=28;
	head->link=NULL;
    struct node *current=malloc(sizeof(struct node));
    current->data=20;
	current->link=NULL;
    head->link=current;



    printf("%d\n",head->data);
    printf("%d\n",current->data);
    tis(head,60);

    return 0;

}

