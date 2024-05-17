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

for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
printf("Maximum number of array is:%d",max);
return 0;
}