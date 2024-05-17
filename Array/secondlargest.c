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
int max=INT_MIN;
int sec_max=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        sec_max=max;
        max=arr[i];
    }
    else if(arr[i]>sec_max && max!=arr[i])
    sec_max=arr[i];
}
printf("%d is the second maximim value",sec_max);
return 0;
}