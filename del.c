//WAP to delete the given number inputed from user in the array inputed by the user
 
#include<stdio.h>

int removingnumber(int arr[],int n,int del){
int i,j,found=0;
for(int i=0;i<n;i++){
    if(arr[i]==del){
        found=1;
        for(int j=i;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        n--;
        i--;
    }
}
return found;
}

int main(){
    int n;
    printf("Enter number of element of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your element:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int del;
    printf("Enter your number to be deleted:");
    scanf("%d",&del);

    int deleting= removingnumber(arr,n,del);
    if(deleting){
        printf("%d found in the array and sucessfully deleted",del);
        printf("Here is the modified array:\n");
        for(int i=0;i<n-1;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

    else{
        printf("%d not found in the array",del);
    }
    return 0;
}