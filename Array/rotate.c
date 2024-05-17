#include<stdio.h>
void reverse(int arr[] , int a , int b){
    
    while(a<b){
        int temp=arr[b];
        arr[b]=arr[a];
        arr[a]=temp;
        a++;
        b--;
    }
}
int main()
{ 
int n,k;
printf("Enter number of elements of array:");
scanf("%d",&n);
int arr[n];
for (int  i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter number of steps to be rotated:");
scanf("%d",&k);
k=k%n;
if(k!=0){
reverse(arr,0,n-1);
reverse(arr,0,k-1);
reverse(arr,k,n-1);
}

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}