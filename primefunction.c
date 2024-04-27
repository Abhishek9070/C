#include<stdio.h>

int prime(int n){
  int a=0;
  for(int i=2;i<=n/2;i++){
    if(n%i==0){
    a=1;
    return 1;
    break;
    }
  }
  return 0;
}
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    int check=prime(n);
    
    if(check==0){
        printf("%d is prime",n);
    }
    else{
        printf("%d is not prime",n);
    }
    return 0;
}