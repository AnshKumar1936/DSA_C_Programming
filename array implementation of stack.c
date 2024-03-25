#include<stdio.h>
int stack_arr[4];
int top=-1;
int data;

void push(int data){

    if(top==4-1){

        printf("stack overflow");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}

int pop(){
    int value;
    if(top==-1){
        printf("stack underflow");
        exit(1);
    }
    value=stack_arr[top];
    top=top-1;
    return value;

}


int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    data=pop();
    //data=pop();
    //data=pop();
    print();
    //printf("%d",data);
    return 0;
}
void print(){
    int i;
    
        if(top==-1){
            printf(" stack overflow");
            return ;
        }
   for(i=top;i>=0;i--)
   {  
    printf("%d",stack_arr[i]);
    printf("\n");
   }
    
}