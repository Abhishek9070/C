/*WAP to print the largest element of the given array using function
*/
#include<stdio.h>
void max(int n, int arr[]){
 for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        break;
    }
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
    max(n,arr);
   
    printf("%d is the largest element of the array",arr[n-1]);
    return 0;
}