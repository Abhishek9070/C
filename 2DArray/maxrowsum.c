/*WAP to find the row and sum with maximum sum of elements*/
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
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            max_row = i;
        }
    }
    printf("%d row having the greatest sum = %d", max_row, max);
    ;
    return 0;
}