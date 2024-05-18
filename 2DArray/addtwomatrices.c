/*WAP to add two matrices*/
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter rows and columns of first matrice:\n");
    scanf("%d%d", &n, &m);
    int a, b;
    printf("Enter rows and columns of second matrices:\n");
    scanf("%d%d", &a, &b);
    int arr[n][m];
    int brr[a][b];
    if (n == a && m == b)
    {
        printf("Enter elements of first array:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        printf("Enter elements of second array:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                scanf("%d", &brr[i][j]);
            }
        }
        int crr[n][m];
        printf("Array after adding both of them :\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                crr[i][j] = arr[i][j] + brr[i][j];
                printf("%d ", crr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The matrices with unequal dimensions can not be added");
    }
    return 0;
}