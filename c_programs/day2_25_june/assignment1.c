/*Let’s create a detailed pseudocode for the program that takes a
    number as input, calculates the square if it’s even, or the cube
    if it’s odd, and then outputs the result. We’ll incorporate conditional and looping constructs:
    */
/*
PROCEDURE calculate_and_output(number)
 // Initialize a variable to store the result
 result ← 0

 // Check if the number is even
 IF number MOD 2 = 0 THEN
     // If even, calculate the square
     result ← number × number
 ELSE
     // If odd, calculate the cube
     result ← number × number × number
 END IF

 // Output the result
 PRINT "The result is: " result

 // Loop to ask the user if they want to continue
 WHILE TRUE
     PRINT "Do you want to continue? (yes/no)"
     response ← READ INPUT

     IF response = "yes" THEN
         // Ask for a new number
         PRINT "Enter a new number: "
         number ← READ INPUT
         // Repeat the calculation and output
         GOTO calculate_and_output(number)
     ELSE IF response = "no" THEN
         // Exit the program
         EXIT
     ELSE
         // Invalid input, ask again
         PRINT "Invalid input. Please enter yes or no."
     END IF
 END WHILE
END PROCEDURE

*/
    #include <stdio.h>

    int square(int num)
    {
        return num * num;
    }

    int cube(int num)
    {
        return num * num * num;
    }

    int main()
    {
        int number;

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            int result = square(number);
            printf("Square of %d is %d\n", number, result);
        }
        else
        {
            int result = cube(number);
            printf("Cube of %d is %d\n", number, result);
        }

        return 0;
    }