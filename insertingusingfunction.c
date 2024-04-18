//WAP to insert a number between the array without replacing any element of the array using function 
#include<stdio.h>
#define MAX_SIZE 100

void inserting(int arr[],int *n,int num,int position){
    if(*n>=MAX_SIZE || position<0 || position>*n){
        printf("Invalid position \n");
        return ;
    }
    for(int i=*n;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=num;
    (*n)++;
    
   
}
int main(){
    int arr[MAX_SIZE];
    int n;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
   
    printf("Enter element of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num,position;
    printf("Enter your number to be inserted:");
    scanf("%d",&num);
    printf("Enter position where to insert:");
    scanf("%d",&position);

     inserting (arr,&n,num,position);

     printf("Array after inserting:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}