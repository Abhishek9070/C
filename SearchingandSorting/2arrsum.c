#include<stdio.h>
int main()
{ 
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int target=8;
int i=0,j=9;
while(i<j){
    if(arr[i]+arr[j]==target){
    printf("arr[%d]+arr[%d]=%d",i,j,target);
    break;
    }
    else if(arr[i]+arr[j]>target)
    j--;
    else 
    i++;
}
return 0;
}