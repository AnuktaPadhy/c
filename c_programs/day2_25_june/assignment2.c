/*
    Assignment 2
    write a program to create a c function, which can calculate sum of two numbers and another which can calculate
    product of two numbers
    */
   #include <stdio.h>

// Function to calculate the sum of two numbers
int add(int a, int b) {
    return a + b;
}

// Function to calculate the product of two numbers
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;

    // Ask the user for two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and print the sum
    int sum = add(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    // Calculate and print the product
    int product = multiply(num1, num2);
    printf("The product of %d and %d is: %d\n", num1, num2, product);

    return 0;
}