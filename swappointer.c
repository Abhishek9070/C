#include<stdio.h>
void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Value of a and b after swaping is:\na->%d \nb->%d",a,b);
    return 0;
}