#include<stdio.h>
int main()
{ 
int n;
printf("Enter number of element of array:");
scanf("%d",&n);
int arr[n];  // initilising array of size n
printf("Enter elements of your array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]); // Taking input from the user
}
printf("Elements of your array is:\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]); // Printing array inputed by the user
}
return 0;
}