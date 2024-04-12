//Printing a hollow sqare using '#' and taking side as input
#include<stdio.h>
int main(){

    int n;
    printf("Enter value of side of square:");
    scanf("%d",&n);
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || i==(n-1)){
                 printf("#"); // Printing the row side border
            }

            else if (j==0 || j==(n-1)){
                 printf("#"); // Printing the column side border  
            }

            else{
            printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}