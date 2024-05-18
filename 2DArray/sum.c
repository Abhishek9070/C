/*WAP to add all the elements of the given array*/
#include <stdio.h>
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements of array is: %d", sum);
    return 0;
}