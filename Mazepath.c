/* WAP to calculate total number of ways to complete a mazepath of n rows and m coloumn. */

#include<stdio.h>

int maze(int cr, int cc, int er, int ec) { // cr -> current row , cc -> current column , er ->
    if(cr == er && cc == ec) // Base case: reached the ending point
        return 1;
    
    int rightways = 0;
    int downways = 0;
    
    if(cr < er) // Move down
        downways = maze(cr + 1, cc, er, ec);
    
    if(cc < ec) // Move right
        rightways = maze(cr, cc + 1, er, ec);
    
    return rightways + downways; // Total ways is the sum of ways moving right and down
}

int main() {
    int n, m;
    printf("Enter number of rows and columns of a maze path:\n");
    scanf("%d %d", &n, &m);
    printf("%d is the total number of ways\n", maze(1, 1, n , m )); 
    return 0;
}
