// https://leetcode.com/problems/three-consecutive-odds/

#include <stdio.h>
#include <stdbool.h>

bool threeConsecutiveOdds(int *arr, int arrSize)
{
    int count = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
            if (count == 3)
            {
                return true;
            }
        }
        else
        {
            count = 0;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 34, 3, 4, 5, 7, 23, 12};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    bool result = threeConsecutiveOdds(arr, arrSize);

    if (result)
    {
        printf("The array contains at least three consecutive odd numbers.\n");
    }
    else
    {
        printf("The array does not contain at least three consecutive odd numbers.\n");
    }

    return 0;
}