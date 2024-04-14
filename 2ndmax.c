#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=INT_MIN;
    int secmax=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }
        else if(secmax<arr[i] && arr[i]!=max){
            secmax=arr[i];
        }
    }
    printf("%d",secmax);
    return 0;
}