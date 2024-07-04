    // Understand Binary Search algorithm and write its pseudo code, algorithm or C code in your own word
    // Binary search algorithm
    // 1. Take Input array arr = {34, 45, 78, 78, 90, 100};
    // 2. search element, equals 'x' say
    // 3. mid index is denoted by mid, left index by left and right index by right
    // 4. Repeat this below step until left <= right till ste
    // 5. mid = left + (right - left) / 2 (mid position in array)
    // 6. See if the searched element is present at the mid position i.e. x == arr[mid], if this the case return or print mid postion
    // stating search element is found at mid position and stop the searching.
    // 7. If search element if(x > arr[mid]) then it sorted list we can be sure that our new left index to be shifted to mid + 1
    // 8. If search element if(x < arr[mid]) then it sorted list we can be sure that our new right index to be shifted to mid -1
    // 9. Repeat step 4

    //pseudocode
  /*  binary_search(arr, left, right, x)
  while left <= right
    mid = (left + right) / 2
    if arr[mid] == x
      return mid
    else if x > arr[mid]
      left = mid + 1  // Search right half
    else
      right = mid - 1  // Search left half
  return -1 (element not found)
  */
 #include <stdio.h>
int binary_search(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Check if x is present at mid
        if (arr[mid] == x) {
            return mid;
        }
        // If x greater, ignore left half
        if (x > arr[mid]) {
            left = mid + 1;
        }
        // If x is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    // If we reach here, then the element was not present
    return -1;
}
int main() {
    int arr[] = {34, 45, 78, 78, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 78; // Element to search
    int result = binary_search(arr, 0, n - 1, x);
    if (result == -1) {
        printf("Element is not present in array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }
    return 0;
}
