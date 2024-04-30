#include<stdio.h>
int power(int a , int b){
    if(b==0) return 1;
    if(b%2==0) return power( a , b/2 )* power( a , b/2 );
    else       return power( a , b/2 )* power ( a , b/2 )*a;
}
int main(){
    int a,b;
    printf("Enter your base and power functions:\n");
    scanf("%d%d",&a,&b);
    printf("%d the value of 'a' to the power 'b'",power(a,b));
    return 0;
}