
//day 6
//Class assignment:
//Matrix manipulation is used to draw computer graphics using C programs. 
//Write a C program to draw 'T' character on screen by setting appropiate pixel
// to '1's and rest to '0's. Reference image given below:
//has context menu
//
#include <stdio.h>

int main() 

{
    int matrix[10][10] = {0};

    // Draw the 'T' character

    for (int i = 1; i < 10; i++) {

        matrix[i][5] = 1;  // Vertical line at column 5

    }

    for (int i = 0; i < 10; i++) {

        matrix[1][i] = 1;  // Top horizontal line at row 1

    }

    // Print the matrix

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            printf("%d ", matrix[i][j]);

        }

        printf("\n");

    }

    return 0;

}

 


