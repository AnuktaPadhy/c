/*
Assignment, day 5, pointers
Create a normal variable
Create a pointer variable
Store memory address of a normal variable inside pointer variable
Read the value of normal variable and print on the screen using pointer variable only
Change of the value of the normal variable to some other other value using pointer variable only
*/

#include <stdio.h>
int main() {
    // Create a normal variable
    int normal_var = 10;

    // Create a pointer variable to store the address of normal_var
    int *ptr = &normal_var;

    printf("Value of normal_var (using normal variable): %d\n", normal_var);

    // Read the value of normal_var using the pointer variable
    int value_using_pointer = *ptr;
    printf("Value of normal_var (using pointer variable): %d\n", value_using_pointer);

    // Change the value of normal_var using the pointer variable
    *ptr = 25;

    printf("Value of normal_var after change (using normal variable): %d\n", normal_var);
    printf("Value of normal_var after change (using pointer variable): %d\n", *ptr);

    return 0;
}


