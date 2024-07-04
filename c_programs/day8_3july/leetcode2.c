// https://leetcode.com/problems/sort-colors/description/
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortColors(int *nums, int numsSize)
{
    int low = 0, mid = 0, high = numsSize - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(&nums[low], &nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(&nums[mid], &nums[high]);
            high--;
        }
    }
}

void printArray(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main()
{
    int nums[] = {2, 0, 2, 1, 1, 0};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    printf("Original array: ");
    printArray(nums, numsSize);

    sortColors(nums, numsSize);

    printf("Sorted array: ");
    printArray(nums, numsSize);

    return 0;
}