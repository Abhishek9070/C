#include<stdio.h>
int interpolationSearch(int arr[],int size,int target){
    int low=0;
    int high=size-1;
    while(low<=high && arr[low]<=target && arr[high]>=target){
        int pos=low+((float)(high-low)/(arr[high]-arr[low]))*(target-arr[low]);
        if(arr[pos]==target) return pos;
        if(arr[pos]>target)
        high =pos-1;
        else 
        low=pos+1;
    }
    return -1;
}
int main()
{ 
int arr[10]={12,13,14,16,17,19,50,56,98,99};
int size=sizeof(arr)/sizeof(arr[0]);
int target = 99;
int result = interpolationSearch(arr,size,target);

if(result!=-1) {
    printf("Number is present at index %d",result);
}
else{
    printf("not found");
}
return 0;
}