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
int odd=0,even=0;
for(int i=0;i<n;i++){
    if(i%2==0){
        even+=arr[i];
    }
    else{
        odd+=arr[i];
    }
}
printf("The diffrence b/w the sum of ekements at even indices to the sum of element at odd is : %d",(even-odd));
}