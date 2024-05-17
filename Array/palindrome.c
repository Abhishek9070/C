#include<stdio.h>
void palindrome(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            printf("Not a palindrome");
            return ;
        }
        i++;
        j--;
     
    }
       
            printf("It is palindrome");
        
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
palindrome(arr,n);
return 0;
}