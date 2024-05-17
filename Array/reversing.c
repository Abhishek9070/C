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
printf("Elements of your array before reversing is:\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]); 
}
printf("\nElements of your array after reversing is:\n");
for(int i=n-1;i>=0;i--){
    printf("%d ",arr[i]); 
}
return 0;
}