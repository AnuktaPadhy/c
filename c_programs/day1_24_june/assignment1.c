    // ****************DAY 1************
    // Complete this assignment 1:
    /*
    // Linear Search
    // List arr = {23, 56, 67, 78};
    // Repeat searching one by one until search element is found
    for( i = 0; i < n ; i++) // This will repeat the code inside block n times
    {
        // to access element you do arr[0] = first element
        // to access ith element you do arr[i]
        complete the code and return the position of the found element else return -1
        Write pseudocode, algorithm or C code is also fine.
        .....
    }
 */
//pseudocode 
// linear_search(arr, n, x)
//   for i = 0 to n - 1
//     if arr[i] == x
//       return i
//   return -1

// C code
#include <stdio.h>
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // return the position of the found element
        }
    }
    return -1; // return -1 if the element is not found
}
int main() {
    int arr[] = {23, 56, 67, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 67; // element to search for
    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Element found at position %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
