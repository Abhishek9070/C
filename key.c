// WAP to find the key element by taking input from the user is present in the given array or not

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    printf("Enter number of element of array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int key,idx=-1;
    printf("Enter the key element to search in the array:");
    scanf("%d",&key);

    bool flag=false;
    for(int i=0;i<5;i++){
        if(arr[i]==key){ 
            flag=true;
            idx=i;
            break;
        }  
    }
    if(flag==true){
        printf("%d is the present in the array at index:%d\n",key,idx);
    }
    else {
        printf("%d is not present in the array",key);
    }
    return 0;
}