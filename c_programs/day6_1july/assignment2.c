/*
Class assignment:
Write a C program which will double the value of the normal variable 
(lets say x) inside user defined function named 'Double1() and Double2()'. 
 Double1() will be use pass by value and Double will use the pass by reference (pointer).
  After calling the Double1() and Double2() print the value of the variable inside the main().
*/
#include <stdio.h>

// Function to double the value using pass by value
void Double1(int x) {
    x = x * 2;
}

// Function to double the value using pass by reference (pointer)
void Double2(int *x) {
    *x = *x * 2;
}

int main() {
    int x = 5; // Initial value of x
    printf("Original value of x: %d\n", x);
    
    // Call Double1() (pass by value)
    printf("Calling Double1()...\n");
    Double1(x);
    printf("Value of x after Double1(): %d\n", x); // x remains unchanged
    
    // Call Double2() (pass by reference)
    printf("Calling Double2()...\n");
    Double2(&x);
    printf("Value of x after Double2(): %d\n", x); // x is doubled
    
    return 0;
}

