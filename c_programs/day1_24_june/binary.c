/*
 * Binary search algorithm.
 * Purpose: Search a given element in the given sorted array.
 * Algorithm main idea / intension: Search algorithm that find the position of the target value within the sorted array. Half of the array is eliminated
 * during each "step". * Time Complexity:
 ** The time complexity of Binary Search is O(log n), where n represents the number of elements in the sorted array. ** It follows a divide-and-conquer approach, reducing the search space in half at each iteration.
 ** The logarithmic behavior ensures efficient searching even for large arrays. * Space Complexity:
 ** The space complexity of the iterative Binary Search is O(1) (constant). ** It uses a fixed amount of extra space, regardless of the input array size. ** No additional data structures or recursion are involved.
 * In summary, Binary Search efficiently locates an element within a sorted array, */
#include <stdio.h>
#define ELEM_NOT_FOUND_INDEX_VALUE -1
int binarySearch(int arr[], int n, int searchElem); // Function prototype
int main()
{
    // Array
    int myArray[] = {3, 7, 18, 23, 33, 50, 91, 92, 102, 120}, searchElem, elemFounIndex, n; // Calculate the size of the array
    n = sizeof(myArray) / sizeof(myArray[0]);
    printf("Enter the element to search:");
    scanf("%d", &searchElem);
    elemFounIndex = binarySearch(myArray, n, searchElem);
    (elemFounIndex != ELEM_NOT_FOUND_INDEX_VALUE) ? printf("Element %d found at index = %d\n", searchElem, elemFounIndex) : printf("Element not found.\n");
    return 0;
}
// Function definition
int binarySearch(int arr[], int n, int searchElem)
{
    int midIndex; // Nothing to initialize. This value is always calculated first and then we will use it.

    // Set the initial value left index index int left_index = 0;
    int left_index = 0;

    // Set the initial value of right index
    int right_index = n - 1; // Where 'n' is the number of elements in the array.

    // Calculate the mid index value as per the idea / intension of the binary search in the sort array while left index <= rightindex means
    // left index value is updated in binary search and it starts moving more towards right and left index value is updated in binary search and
    // it starts moving more towards left then keep on calulating mix index based on the current set or currently updated values of left index
    // and right index until currently updated left index value and right index value makes sense as per their meaning in array
    // that is left index in the new provided half array should be either less than or in extreme case should be equal to right index updated values
    // but when the left index values and right index values are keep on updating and left index value tries to become more thenright index
    // value while left index is moving towards more right during updation and right index updated value becoming less than left index value while
    // moving more towards left durting the updation then we should not anymore use the value of left index and right index to calculate the
    // mid index value, we should stop the process of calculating the new mid-index value iteratively
    // Iteratively or repeatedly calculate first mid index value, then try to see if the search element exits at the mid index then
    // return the mid index from the binary search function, else update the value of new left index or new right index based onthe // value of searched element w.r.t. value present at mid index
    while (left_index <= right_index)
    {
        // Calulate mid index value properly avoid mid index value overflow situation, i.e. mid index should be // some value less than or equal to current updted values of low_index and high_index
        midIndex = left_index + (right_index - left_index) / 2;
        if (arr[midIndex] == searchElem)
        {
            return midIndex;
        }
        if (searchElem > arr[midIndex])
        {
            // If the search element is greater than the element found at mid index, since array is sorted so we need to update the our // left index so that left index value will be equal mid + 1 in our new half of the array we have to search
            left_index = midIndex + 1;
        }
        else // else represents here: if(searchElem > arr[midIndex]) {
            // If the search element is smaller than the element found at mid index, since array is sorted so we need to update the our // right index so that right index value will be equal mid -1 1 in our new half of the array we have to search
            right_index = midIndex - 1;
    }

    // If reached here at this point it means that the searched element is not found return ELEM_NOT_FOUND_INDEX_VALUE;
    return ELEM_NOT_FOUND_INDEX_VALUE;
}