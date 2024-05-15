#include<stdio.h>
int findingnumber(int arr[],int n , int target){
    int low=0;
    int high=n-1;
    for(int i=0;i<n;i++){
        int mid=(low+high)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(target>mid){
            low=mid+1;
        }
        else
           high=mid-1;
    }
    return -1;
}
int main()
{ 
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
int target;
printf("Enter your target number to be found in the array:");
scanf("%d",&target);

int result=findingnumber(arr,n,target);
if(result!=-1){
    printf("number is found at index:%d",result);
}
else
printf("NUmber not found");
return 0;
}