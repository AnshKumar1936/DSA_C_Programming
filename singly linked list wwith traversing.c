#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};


int main()
{
    
    struct node *head=malloc(sizeof(struct node));
    head->data=28;
	head->link=NULL;


    struct node *current=malloc(sizeof(struct node));
    current->data=20;
	current->link=NULL;
    head->link=current;

    struct node *current2=malloc(sizeof(struct node));
    current2->data=20;
	current2->link=NULL;
    head->link->link=current2;
    // Fodes(head);


   
    printf("%d\n",head->data);
    printf("%d\n",head->link);
    printf("%d\n",current->data);
    printf("%d\n",current->link);
    printf("%d\n",current2->data);
    printf("%d\n",current2->link);

    return 0;
}
// void Fodes(struct node *head){
//     int count =0;
//     if(head==NULL)
//        printf("the linked is empty");
//     struct node *ptr=NULL;
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d\n",ptr->data);
//         ptr=ptr->link;
//     }
    
// }
// void Fodes(struct node *head){
//     int count =0;
//     if(head==NULL)
//        printf("the linked is empty");
//     struct node *ptr=NULL;
//     ptr=head;
//     while(ptr!=NULL){
//         count++;
//         ptr=ptr->link;
//     }
//     printf("%d",count);
// }