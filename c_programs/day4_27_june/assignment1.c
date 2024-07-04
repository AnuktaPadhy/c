// Assignment:
// Write a multi-file C program which contains 2 files
// 1. Developer 1: 'main.c' which will contain main() function and use functions from other developer.
// 2. Developer 2: 'math2.h" sum(), product()
 
// Reference code:
// main.c, developer1, who comines the code, write the file that contains main() function
// // Multi-file C program.
// // Two developers are working on single C project or single C program
// // Developer 1
#include <stdio.h> // Including defintion of pre-defined functions
#include "math1.h" // Including defintion of develop 1 functions
#include "print.h"
int main()
{
    int r = square(5);
    printf("Square of 5 is %d", r);
    printTenTime('@');
    return 0;
}
 
//math1.h, developer 2, write all math functions of a C project
// Multifile C program.
// To developers are working on single C project or single C program
// Developer 2
// Square function definition
#ifndef MATH1_H
#define MATH1_H
int square(int x)
{
    int output = x * x;
    return output;
}
int cube(int x)
{
    int output = x * x * x;
    return output;
}
#endif
 
//print1.h, developer 3, write all math functions of a C project
// Developer 3
#include <stdio.h>
#ifndef PRINT_H
#define PRINT_H
void printTenTime(char ch)
{
    for(int i = 0; i < 10; i++)
    {
        printf("%c", ch);
    }
}
#endif


//------------------------------------------

#include<stdio.h>
#include "math.h"
int main()
{
    int a=2,b=3;
 
    int sum_r = sum(a,b);
    int product_r = product(a,b);
    printf("Sum=%d\n",sum_r);
    printf("Product=%d",product_r);
    return 0;
}
 
//Math.h (header file)
#ifndef MATH_H
#define MATH_H
 
int sum(int a,int b);
int product(int a,int b);
#endif
 
//Math.c function
#include"math.h"
int sum(int a,int b)
{
    return a+b;
}
 
int product(int a,int b)
{
    return a*b;
}