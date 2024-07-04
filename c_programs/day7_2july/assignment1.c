// Dynamic memory allocation in C
/*
Create a C program that will allocate memory for 1 integer,
1 float, 1 char and 1 double data in heap memory using
Dynamic Memory Allocation in C. Then store some value in
this dynamically allocated (reserver) memory in heap and
double that value and print the result on the screen.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    // 1 intger type memory dynamically allocated
    // Memory is allocated in heap memory and its first byte memory address is stored inside pointer p1
    int *p1 = (int *)malloc(sizeof(int) * 1);
    *p1 = 10;      // Store the value into dynamically allocated memory using pointer
    *p1 = *p1 * 2; // Double the value
    printf("Double value of integer type data = %d\n", *p1);
    free(p1); // It is the duty of programmer to release dynamically allocated memory

    // 1 float type memory dynamically allocated
    // Memory is allocated in heap memory and its first byte memory address is stored inside pointer p2
    float *p2 = (float *)malloc(sizeof(float) * 1);
    *p2 = 10.2f;   // Store the value into dynamically allocated memory using pointer
    *p2 = *p2 * 2; // Double the value
    printf("Double value of float tpye data = %f\n", *p2);
    free(p2); // It is the duty of programmer to release dynamically allocated memory

    // 1 char type memory dynamically allocated
    // Memory is allocated in heap memory and its first byte memory address is stored inside pointer p3
    char *p3 = (char *)malloc(sizeof(char) * 1);
    *p3 = 'A'; // Store the value into dynamically allocated memory using pointer
    printf("Value of character = %c\n", *p3);
    free(p3); // It is the duty of programmer to release dynamically allocated memory

    // 1 double memory dynamically allocated
    // Memory is allocated in heap memory and its first byte memory address is stored inside pointer p4
    double *p4 = (double *)malloc(sizeof(double) * 1);
    *p4 = 23.62;   // Store the value into dynamically allocated memory using pointer
    *p4 = *p4 * 2; // Double the value
    printf("Double value of double type data is = %lf\n", *p4);
    free(p4); // It is the duty of programmer to release dynamically allocated memory

    return 0;
}