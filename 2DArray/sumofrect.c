/*Given a matrix 'a' of dimension n*m and 2 coordinates (l1,r1),(l2,r2).
Return the sum of the rectangle from (l1,r1) to (l2,r2) */
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
    int r1, l1;
    printf("Enter first coordinate:\n");
    scanf("%d%d", &r1, &l1);
    int r2, l2;
    printf("Enter second coordinate:\n");
    scanf("%d%d", &r2, &l2);
    int sum = 0;
    for (int i = r1; i <= r2; i++)
    {
        for (int j = l1; j <= l2; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements between the coordinate is: %d", sum);
    return 0;
}