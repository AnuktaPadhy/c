/*

Home assignment:
Write C programs using pass by reference (pointers) for following;
1. Bubble sort
2. Selection sort
3. Insertion sort
4. Linear Search
5. Binary Search using iteration (loop), take unsorted array and sort its using any one of the sorting algorithm
Sample skeleton of all sorting

int main()
{
  int a[] = {23, 34, 45};
  BubbleSort(a);
  Print sorted array in main() function
  return 0; 
}
void BubbleSort(int x[])
{
   // He will do the bubble sort
   // Swap
   Swap(&a, &b);
   // Change do in the function should be reflected back in the calling function
}
// Write a function to swap() two given numbers using pass by reference (pointers)
void Swap(int *x, int *y)
{
     temp = *x;
	 *x = *y;
	 *y = temp;
}
*/
//Bubble sort 
#include <stdio.h>

void Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                Swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    BubbleSort(a, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}