#include <stdio.h>
int binary_search(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int mid_value = arr[mid];
        if (mid_value == target)
            return mid;
        else if (mid_value < target)
        {
           
            low = mid + 1;
        }
        else
             high = mid - 1;
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter number of element of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter element of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int target;
    printf("\nEnter your target number:");
    scanf("%d", &target);
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, size, target);
    if (result != -1)
        printf("Element found in the array at index :%d", result);
    else
        printf("Element not found");
    return 0;
}
