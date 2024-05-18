/* wap for transpose of matrix by using swaping the values
*/
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter rows and column of the 2d array:\n");
    scanf("%d%d", &n, &m);
    int arr[n][m];
    printf("Enter element of array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("Transpose of the matrix is\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}