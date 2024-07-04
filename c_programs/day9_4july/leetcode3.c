
// Leetcode: 80. Remove Duplicates from Sorted Array II
 
#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) return 0;
    
    int i = 0;
    int count = 1;
    
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] == nums[i]) {
            if (count < 2) {
                i++;
                nums[i] = nums[j];
                count++;
            }
        } else {
            i++;
            nums[i] = nums[j];
            count = 1;
        }
    }
    
    return i + 1;
}

int main() {
    int nums[] = {1, 1, 1, 2, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    int newLength = removeDuplicates(nums, numsSize);
    
    printf("New length: %d\n", newLength);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    return 0;
}