#include<stdio.h>
int main(){
    int height=7;
    int width=6;
    int i,j;
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if((i==0 || i==height/2) || (j==0)){
                printf("#");
            }
                else{
                    printf(" ");
                }   
        }
        printf("\n");
    }
    return 0;
}