//Write a C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters in the string between n1 and n2.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter your string:");
    scanf("%s",&str);
    int n1,n2;
    printf("Enter the places in the string where you want to interchange the string:\n");
    scanf("%d%d",&n1,&n2);

    int length =strlen(str); //calculating length of string using strln function 
    if(n1>length || n1<1 || n2<1 || n2>length){
        printf("invalid");
    }

    else{
        int temp=str[n1-1];
        str[n1-1]=str[n2-1];
        str[n2-1]=temp;

     printf("%s",str);
    }
   
    return 0;
}