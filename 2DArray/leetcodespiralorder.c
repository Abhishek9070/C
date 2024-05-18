/* Given an n * m matrix .We have print all elements of matrix in spiral order .
input -> 1 2 3 4
         5 6 7 8
         9 10 11 12
         13 14 15 16

output-> 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 15 14 10 
*/
#include<stdio.h>
int main()
{ 
int n,m;
printf("Enter rows and columns of the matrix:");
scanf("%d%d",&n,&m);
int arr[n][m];
printf("Enter the elements of array:\n");
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&arr[i][j]);
    }
}
int minr=0;
int maxr=n-1;
int minc=0;
int maxc=m-1;
int tne=n*m;
int count=0;
while (count<tne)
{
  for(int i=minc;i<=maxc&&count<tne;i++){
    printf("%d ",arr[minr][i]);
    count++;
  }
  minr++;
  for(int j=minr;j<=maxr&&count<tne;j++){
    printf("%d ",arr[j][maxc]);
    count++;
  }
  maxc--;
  for(int k=maxc;k>=minc&&count<tne;k--){
    printf("%d ",arr[maxr][k]);
    count++;
  }
  maxr--;
  for(int l=maxr;l>=minr&&count<tne ;l--){
    printf("%d ",arr[l][minc]);
    count++;
  }
  minc++;
}

return 0;
}