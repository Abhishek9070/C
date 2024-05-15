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
for(int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){
        if(arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}