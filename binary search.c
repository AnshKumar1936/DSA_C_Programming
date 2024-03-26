#include<stdio.h>
int main(){
    int i,n,first,last,mid,search,array[100];
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter the elements int the array\n");
    
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);   
    }
    printf("enter the value to be searched\n");
    scanf("%d",&search);

    first=0;
    last=n-1;
    

    while(first<=last){
        mid=(first+last)/2;
        if(array[mid]<search){
            first=mid+1;
        }
        else if(array[mid]==search){
            printf("%d found at position %d\n",search,mid);
            break;
        }
        else{
            last=mid-1;
        }    
    }
    if(first>last){
            printf("%d is not found in the array\n",search);
        }
    return 0;
        
}


//another binary search program
// #include<stdio.h>
// #include<time.h>
// int binarySearch(int A[], int n, int el)
// {
//     int start=0,end=n,mid,count=0;
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         count++;
//         if(A[mid]>el){
//             end=mid-1;
//             count++;}
//         else if(A[mid]<el){
//             start=mid+1;
//             count++;}
//         else{
//             printf("Total Number of Comparison is/are %d\n",count);
//             return mid;}
//     }
//     printf("Total Number of Comparison is/are %d\n",count);
// }

// int main()
// {
//     int n,i,j,x,temp,flag=0;
//     printf("Enter the size of the Array:");
//     scanf("%d",&n);
//     int A[n];
//     for(i=0; i<n; i++)
//     {
//         A[i]=rand()%(n*10)+1;
//         printf("%d ",A[i]);
//     }
//     for(i=0; i<n-1; i++)
//     {
//         for(j=0; j<n-i-1; j++)
//         {
//             if(A[j]>A[j+1])
//             {
//                 temp=A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//             }
//         }
//     }
//     printf("\nEnter the number you have to search:");
//     scanf("%d",&x);
//     int p=binarySearch(A,n,x);
//     printf("Searched element is present at %d",p+1);
//     return 0;
// }

