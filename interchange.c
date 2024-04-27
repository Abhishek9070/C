// WRITE A PROGRAM TO INTERCHANGE THE BIGGEST AND THE SMALLEST NUMBER IN THE ARRAY

#include<stdio.h>
#include<stdbool.h>
void interchange(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            
        }
    }

}
void sorting(int arr[],int n){

    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
            }
        }
        if(flag=false) break;
    }
    printf("Sorted array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    interchange(arr,n);
}
int main(){
    int n;
    printf("Enter number of element of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sorting(arr,n);
    return 0;
}