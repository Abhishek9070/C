/*WAP to find the maximum element of the array*/
#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m;
    printf("Enter rows and columns of matrice:\n");
    scanf("%d%d", &n, &m);

    int arr[n][m];
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = INT_MIN;
    int max_row = INT_MIN;
    int max_column = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                max_row = i;
                max_column = j;
            }
        }
    }
    printf("%d is the maximum number in the array at the index (%d,%d)", max, max_row, max_column);
    return 0;
}