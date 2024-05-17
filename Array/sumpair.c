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
int x,totalpair=0;
printf("Enter your number:");
scanf("%d",&x);
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==x){
            printf("arr[%d]+arr[%d]=%d\n",i,j,x);
            totalpair++;
        }
    }
}
printf("Total number of pair is %d",totalpair);
return 0;
}