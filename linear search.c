#include<stdio.h>
int main(){
    int array[100],n,search,i;
    printf("enter the number of element in the array:\n");
    scanf("%d",&n);
    printf("enter the element in the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter the element to be searched in the array\n");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(array[i]==search){
            printf("%d is present at position %d\n",search,i+1);
            break;

        }
    }
    if(i==n){
            printf("%d is not present in the array\n",search);

    }
    return 0;
}