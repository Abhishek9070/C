//WAP to insert a number between the array without replacing any element of the array
 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num,position;
    printf("Enter your number to be inserted:");
    scanf("%d",&num);
    printf("Enter position where to insert:");
    scanf("%d",&position);

    for(int i=n;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=num;
    n++;
    printf("Array after inserting:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}