#include<stdio.h>
int main()
{ 
int n;
printf("Enter number of element of array:");
scanf("%d",&n);
int arr[n]; 
printf("Enter elements of your array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]); 
}
int sum=0;
printf("Elements of your array is:\n");
for(int i=0;i<n;i++){
    sum+=arr[i];
}
printf("Sum of the array is :%d",sum);
return 0;
}