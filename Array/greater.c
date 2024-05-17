#include<stdio.h>
#include<limits.h>
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
int x,count=0;
printf("Enter your number:");
scanf("%d",&x);
for(int i=0;i<n;i++){
    if(arr[i]==x)
    count++;
}
printf("%d occurs %d times in the given array",x,count);
return 0;
}