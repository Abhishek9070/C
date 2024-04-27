#include<stdio.h>
int num(int n , int arr[] ,int a){
    int count=0;
    for(int i=0;i<n;i++){
        if(a==arr[i]){
        count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    printf("Enter number to find occurance:");
    scanf("%d",&a);
    int occur=num(n,arr,a);
    
    printf("%d is the time of occurance",occur);
    return 0;
}