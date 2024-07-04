
//linear search 
/*
#include <stdio.h>

int LinearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 25;
    int result = LinearSearch(a, n, key);
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}
*/
// Linear search program (iterative method) using pointers
#include <stdio.h>
 
// Function prototype
int linearSearch(int *arr, int n, int key);
 
// Driver code
int main()
{
    // array
    int arr[10] = {23, 56, 8, 78, 89, 43, 56, 78, 67, 44};
    // Calculate the size of the given array
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // ask search element (key) from the user
    int key = 56;
 
    // search the element using linear search
    int index = linearSearch(arr, n, key);
 
    // print the result, element is found or not
    (index == -1) ? printf("Element is not found!\n") : printf("Element is found at index = %d\n", index);
 
    return 0;
}
 
// Linear search algorithm
// 1. int linearSearch(int arr[10])
// 2. int linearSearch(int arr[])
// 3. int linearSearch(int *arr), I will use this method because I want to use with pointers.
int linearSearch(int *arr, int n, int key) // arr is a pointer variable pointing to first byte of the complete array
{
    // Enumerate array and compare with key, but using pointer
    for(int i = 0; i < n; i++)
    {
        // How to access each element of the array
        // 1. Index notation or subscript notation: arr[i]
        // 2. Using pointers directly: *(arr + i), I will use the second method because I want to work with pointers
        if(*(arr + i) == key)
        {
            // Element found, return index now.
            return i;
        }
    }
    // We reached here, this means no element is found in the passed array
    return -1;
}
