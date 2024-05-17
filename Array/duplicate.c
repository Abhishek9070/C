#include<stdio.h>
int main()
{ 
int n;
printf("Enter number of element of array:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int count=0,num;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
       if(arr[i]==arr[j]){
       count++;
       num=i;
       break;
       }
    }
}
 printf("%d is the duplicate number and it occurance is %d times",arr[num],count);
return 0;
}