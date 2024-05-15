#include<stdio.h>
int main()
{ 
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    int min=__INT_MAX__;
    int min_idx=i;
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            min_idx=j;
        }
    }
    int temp=arr[min_idx];
    arr[min_idx]=arr[i];
    arr[i]=temp;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}