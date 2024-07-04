/*  ************DAY 5*****************
1. Write a C program to sum 'N' numbers. Program should ask how many numbers to sum from user.s
Program should also ask category of numbers to sum. There are two categories
1. Even numbers
2. Odd numbers
3. Exit
Design a menu system given above choices.
Whatever category of numbers user enters program should sum only those category of numbers.
Sample 1:
Total number to sum: 10
1. Even numbers
2. Odd numbers
3. Exit
Choice: 1
Sum: 120 (which is a sum of these numbers 2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20)
*/

#include <stdio.h>
int main()
{
    int n, choice, sum = 0;
    int i, number = 0;
    printf("Total number to sum:");
    scanf("%d", &n);

    printf("1. Even number\n");
    printf("2. Odd number\n");
    printf("3. Exit\n");

    while (1)
    {
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice)
    {
    case 1:
        // summing even numbers
        for (i = 0; i < n; i++)
        {
            sum += number;
            number += 2;
        }
        printf("Sum: %d\n", sum);
        break;

    case 2:
        // summing odd numbers
        number = 1; // start with the first odd number
        for (i = 0; i < n; i++)
        {
            sum += number;
            number += 2;
        }
        printf("sum: %d\n", sum);
        break;

    case 3:
        // Exit
        printf("Exiting the program.\n");
        return 0;

    default:
        printf("Invalid choice. Try Again. \n");
    }
    }
return 0;
    
}
