
// 75. Leetcode Sort Colors
#include <stdio.h>
enum Colors {RED, WHITE, BLUE};
// Function prototype
void sortColors(int* nums, int size);
int main()
{
    // Create nums array
    int nums[] = {2,0,2,1,1,0};
    // Calculate the size of the array
    int n = sizeof(nums) / sizeof(nums[0]);
 
    // Call sortColors() and sort the colors
    // Since array is pointer variable passed by reference, changes made in the in
    // the nums array inside  sortColors() will be relflected back in main()
    sortColors(nums, n);
 
    // Print the colors array
    for(int i = 0; i < n; i++)
    {
        printf("%d, ", *(nums + i));
    }
    return 0;
}
 
void sortColors(int* nums, int size)
{
    int ones, twos, threes;
    ones = twos = threes = 0;
 
    // Start iterating to each element of the array and start counting
    // ones, twos and threes in the given array
    // Counting Sort
    for(int i = 0; i < size; i++)
    {
        switch(*(nums + i)) // we can write it also as: switch(num[i])
        {
            case RED: ones++; break;
            case WHITE: twos++; break;
            case BLUE: threes++; break;
        }
    }
 
    // Fill RED colors (ones) in nums array, because are the smallest
    for(int i = 0; i < ones; i++)
    {
        nums[i] = RED;
    }
 
    // Fill WHITE colors (twos) in nums array, because are the second smallest
    for(int i = ones; i < ones + twos; i++)
    {
         nums[i] = WHITE;
    }
 
    // Fill thress in nums array, because are the largest
    for(int i = ones + twos; i < ones + twos + threes; i++)
    {
         nums[i] = BLUE;
    }
    return;
}
 