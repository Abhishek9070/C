/* WAP so that a person can reach his/her destination using nth number of stairs ,
but ther is a condition that he/she can climb upto 1 or 2 stair at a time*/

#include<stdio.h>
int steps(int n){
    if(n==1 || n==2) return n;
    return steps(n-1)+steps(n-2);

}
int main(){
    int n;
    printf("Enter number of steps:");
    scanf("%d",&n);
    printf("%d is the total number of ways to climb the stair",steps(n));
    return 0;
}