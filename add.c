//WAP to calculate the sum and average of the array

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0,avg=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    printf("%d is the sum of array",sum);
    avg=(float)sum/2;
    printf("%d is the average",avg);
    return 0;
}