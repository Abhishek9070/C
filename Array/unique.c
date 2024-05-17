#include<stdio.h>
int unique(int arr[],int n){
    int a=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
             a=i;
        }
    }
    return a;
}
int main()
{ 
int n;
printf("enter number of element of array:");
scanf("%d",&n);;
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int a = unique(arr,n);
printf("%d is unique number",arr[a]);
return 0;
}