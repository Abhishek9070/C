/* Write a program in C to find the largest and smallest word in a string.
Accept the string using command line arguments. 
*/
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
    char index[MAX];
    printf("Enter your string: ");
    scanf("%[^\n]s",index);
    
    int i=0,j=0,min_len=MAX,max_len=0;
    char maxmimum_word[MAX],minimum_word[MAX];
    while(index[i]){
        while(index[i] == ' ')
        i++;
        j=i;
        while(index[i] && index[i] != ' ')
        i++;
        int len = i-j;
        if(len<min_len){
            min_len=len;
            strncpy(minimum_word,&index[j],len);
            minimum_word[len]='\0';
        }
        if(len>max_len){
            max_len=len;
            strncpy(maxmimum_word,&index[j],len);
            maxmimum_word[len]='\0';
        }
    }
    printf("The largest word is: '%s'\nThe smallest word is: '%s'\nAnd the real array is: '%s'",maxmimum_word,minimum_word,index);
    return 0;
}