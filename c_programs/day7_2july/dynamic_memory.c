/*
Create a C program that will allocate memory for 1 integer, 1 float,
char and 1 double data
in heap memory using Dynamic memory allocation in c. Then store some value in this dynamically
allocate (reserve) memory in heap and double that value and print the result on the screen.
*/

#include <stdio.h>
#include <stdlib.h> //library to use memory allocation techniques.

int main()
{
    // Allocating memory for one integer.
    int *intPtr = (int *)malloc(sizeof(int));
    if (intPtr == NULL)
    {
        printf("Memory allocation failed for integer.\n");
        return 1;
    }
    // Allocating memory for one float
    float *floatPtr = (float *)malloc(sizeof(float));
    if (floatPtr == NULL)
    {
        printf("Memory allocation failed for float.\n");
        free(intPtr); // Free previously allocated memory
        return 1;
    }
    // Allocating memory for one char
    char *charPtr = (char *)malloc(sizeof(char));
    if (charPtr == NULL)
    {
        printf("Memory allocation failed for char.\n");
        free(intPtr);   // Free previously allocated memory
        free(floatPtr); // Free previously allocated memory
        return 1;
    }
    // Allocating memory for one double
    double *doublePtr = (double *)malloc(sizeof(double));

    if (doublePtr == NULL)
    {
        printf("Memory allocation failed for double.\n");
        free(intPtr);   // Free previously allocated memory
        free(floatPtr); // Free previously allocated memory
        free(charPtr);  // Free previously allocated memory
        return 1;
    }

    // Store values in the allocated memory.
    *intPtr = 10;
    *floatPtr = 5.5f;
    *charPtr = 'A';
    *doublePtr = 20.25;

    // Double the values and print the results.
    *intPtr *= 2;
    *floatPtr *= 2;
    *charPtr += 1; // Will increment the character to the next one in ASCII table
    *doublePtr *= 2;

    printf("Doubled integer value: %d\n", *intPtr);
    printf("Doubled float value: %.2f\n", *floatPtr);
    printf("Next char value: %c\n", *charPtr); // Result is the next character
    printf("Doubled double value: %.2f\n", *doublePtr);

    // Free allocated memory
    free(intPtr);
    free(floatPtr);
    free(charPtr);
    free(doublePtr);

    return 0;
}