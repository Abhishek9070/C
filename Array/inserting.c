#include<stdio.h>

int main()
{ 
int n;
printf("Enter array size:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int a,idx;
printf("Enter number and index where to add it:\n");
scanf("%d%d",&a,&idx);

for(int i=n;i>.idx;i--){
    arr[i]=arr[i-1];
}
arr[idx]=a;
n++;
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}