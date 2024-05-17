#include <stdio.h>
int del(int arr[], int n, int num)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (num == arr[i])
        {
            found = 1;
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            i--;
            n--;
        }
    }
    return found ? n : -1;
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter number to be deleted:");
    scanf("%d", &num);
    int found = del(arr, n, num);
    if (found)
    {
        printf("%d is found  and deleted\n", num);
        printf("Array after deleting:\n");
        for (int i = 0; i < found; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}