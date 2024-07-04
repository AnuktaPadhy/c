
// binary search
#include <stdio.h>

// Function to perform Binary Search
int BinarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid; // Element found, return index
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found, return -1
}

int main() {
    int a[] = {11, 12, 22, 25, 34, 64, 90};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 25;

    // Perform Binary Search
    int result = BinarySearch(a, n, key);
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}