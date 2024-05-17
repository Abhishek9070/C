#include<stdio.h>
void change(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
    }
}
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
change(arr,n);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}