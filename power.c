/*Making a function which calculate 'a' raised the power 'b' using recursion*/
#include<stdio.h>
int power(int a, int b){
    if( b==0 ) return 1;
    return a*power(a,b-1);
}
int main(){
    int a,b;
    printf("Enter your numbers:\n");
    scanf("%d%d",&a,&b);
    int p=power(a,b);
    printf("%d is the answer",p);
    return 0;
}