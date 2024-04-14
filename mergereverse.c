// WRITE A PROGRAM TO MERGE TWO INTEGER ARRAYS AND DISPLAY THE MERGED ARRAY IN REVERSE ORDER

#include<stdio.h>
void merge_array(int arr1[],int arr2[],int arr3[],int n,int m,int k){
    int i,j=0;
    for( i=0;i<n;i++){
        arr3[i]=arr1[i];
        j++;
    }
    for(i=0;i<m;i++){
        arr3[j]=arr2[i];
        j++;
    }
    printf("Mergerd 3rd array in reversed array:\n");
    for(int i=k-1;i>=0;i--){
        printf("%d ",arr3[i]);
    }
}
int main(){
    int n;
    printf("Enter number of element of 1st array :");
    scanf("%d",&n);
    int m;
    printf("Enter number of element of 2nd array :");
    scanf("%d",&m);
    int k=n+m;
    printf("Element of 3rd array :%d\n",k);
    int arr1[n];
    printf("Enter elements of 1st array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[m];
    printf("Enter elements of 2nd array:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int arr3[k];
    merge_array(arr1,arr2,arr3,n,m,k);

    return 0;
}