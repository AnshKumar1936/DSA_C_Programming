#include<stdio.h>

// int main(){
//     int i , arr[5];

//     for(i =0;i<5;i++){
//         printf("enter the numbers %d =",i+1);
//         scanf("%d",&arr[i]);
//     }

//         printf("the values are");
//         for(i=0;i<5;i++){
//             printf("\n%d",arr[i]);
//         }

//     return 0;
    
// }

// int main(){
//     int i;
//     int n;
//     int marks[20];
//     int sum=0;
//     float average;

//     printf("enter the total numbers ");
//     scanf("%d",&n);
//     for (i=0;i<n;i++){
//         printf("enter the values %d",i+1);
//         scanf("%d",&marks[i]);
//         sum=sum+marks[i];
//     }

//     average=sum/n;
//     printf("the average is %f", average);


//     return 0;
// }

// int main(){
//     int a,b;
//     printf("enter the numbers");
//     scanf("%d %d",&a,&b);

//     printf("values befare swap a = %d b = %d",a,b);

//     a=a+b;
//     b=a-b;
//     a=a-b;

//     printf("\nvalues after swap  a = %d b = %d\n",a,b);
//     return 0;
// }

// int main(){
//     int a,b ,temp;
//     printf("enter the numbers");
//     scanf("%d %d",&a,&b);

//     printf("values befare swap a = %d b = %d",a,b);

//    temp=a;
//    a=b;
//    b=temp;
   
//     printf("\nvalues after swap  a = %d b = %d\n",a,b);
//     return 0;
// }



// int main(){
//     int a[100],n,i,j,position,swap;
//     printf("enter total no of elements");
//     scanf("%d",&n);
//     printf("enter %d numbers: ",n);
//     for(i=0;i<n;i++)
//        scanf("%d",&a[i]);
//     for(i=0;i<n-1;i++){
//         position=i;
//     for(j=i+1;j<n;j++){
//         if(a[position]>a[j]);
//         position=j;

//     }
//     if(position!=i){
//         swap=a[i];
//         a[i]=a[position];
//         a[position]=swap;
//     }
//     }
//     printf("sorted array");
//     for(i=0;i<n;i++)
//         printf("\n%d",a[i]);
    
//     return 0;   
//}

//selection sorting....

int main(){
    int a[100], n, i, j, position, swap;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    printf("Enter %d Numbers:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n - 1; i++){
        position=i;
    for(j = i + 1; j < n; j++){
        if(a[position] > a[j])
        position=j;
    }
    if(position != i){
        swap=a[i];
        a[i]=a[position];
        a[position]=swap;
    }
    }       
    printf("Sorted Array:");
    for(i = 0; i<n; i++)
        printf(" %d ", a[i]);
    return 0;
}

//bubble sorting.....

// void bubble_sort(int arr[], int n) {
//     int i, j;
//     for (i = 0; i < n-1; i++) {
//         for (j = 0; j < n-i-1; j++) { 
//             if (arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr, n);
//     printf("Sorted array: \n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// void bubble_sort(int arr[],int n){
//     int i , j;
//     for (int i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={8,2,6,3,4,5};
//     int n = sizeof(arr)/ sizeof(arr[0]);
//     bubble_sort(arr,n);
//     printf("sorted array");
//     for (int i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }


// int main(){
//     int a=6;
//     int b=5;
//     printf("AND  opertor is %d \n",a&b);
//      printf("OR  opertor is %d \n",a!b);
//       printf("XOR  opertor is %d\n",a^b);
//        printf("complement  opertor is %d",~a);
//         printf("leftshift  opertor is %d",<<a);
//          printf("rightshift  opertor is %d",>>a);
//          return 0;
         
    

   
// }
