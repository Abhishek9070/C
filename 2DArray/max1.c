/*Wap to find the row having maximum number of 1*/
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][4] = {(1, 0, 1, 0), (1, 1, 0, 1), (1, 0, 0, 0), (1, 1, 1, 1)};

    int max_count = INT_MAX;
    int idx = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
            if (max_count > count)
            {
                idx = i;
            }
        }
    }
    printf("%d have highest number of 1", idx);
    return 0;
}