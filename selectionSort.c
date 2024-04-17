// WAP to sort the element in ascending order using selection sort

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter number of element of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
            idx=j;
        }
        }
            int temp=arr[idx];
            arr[idx]=arr[i];
            arr[i]=temp;
        
    }
    printf("Sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}