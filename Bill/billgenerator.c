#include <stdio.h>
#include<string.h>
#include<stdlib.h>

char * replaceString(const char * str , const char * oldWord , const char * newWord){
    char *newString;
    int i,count=0;
    int oldWordlength=strlen(oldWord);
    int newWordlength=strlen(newWord);
    for(i=0 ; str[i]!='\0';i++){
        if(strstr(&str[i],oldWord)==&str[i]){
            count++;
            i=i+oldWordlength-1;
        }
    }
    newString=(char *)malloc(i+ count * (newWordlength-oldWordlength)+1);
    i=0;
    while(*str){
        if(strstr(str,oldWord)==str){
            strcpy(&newString[i],newWord);
            i+=newWordlength;
            str+=oldWordlength;
        }
        else{
            newString[i]=*str;
            i+=1;
            str+=1;
        }
    }
    newString[i]='\0';
    return newString;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("GenBill.txt", "w");
    char str[200];

    fgets(str, 200, ptr);
    printf("The old bill template was: %s\n", str);
    char *genbill;
    genbill=replaceString(str,"{{name}}","Abhishek");
    genbill=replaceString(genbill,"{{item}}","Laptop");
    genbill=replaceString(genbill,"{{outlet}}","Aditya vision");

    printf("The new generated bill is: %s\n",genbill);
    fprintf(ptr2,"%s",genbill);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}