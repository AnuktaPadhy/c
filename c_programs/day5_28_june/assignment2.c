// Assignment, day 5, Jun 28
// Write a C program that will create an array 95 characters, store all 95 printable ASCII Code table characters in it starting ASCII code 32 to 126. Then print all the charactes stored in array and while priniting also tell their category
// Category is like this:
// Category 1: Alphabet, small case letter
// Category 2: Alphabet, capital case letter
// Category 3: Nemerical Digit
// Category 4: General Printable Character

// Output sample:
// Character		Category
// --------------  ---------------------------
// 			    General Printable Character
// !				General Printable Character
// .
// .
// .
// .
// 0				Nemerical Digit
// .
// .
// .
// A 				Alphabet, capital case letter
// .
// .
// a 				Alphabet, small case letter

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     const int num_char = 95;
//     char ascii_table[num_char];

//     // Initialize array with characters from ASCII 32 to 126
//     for (int i = 0; i < num_char; i++) {
//         ascii_table[i] = i + 32;
//     }

//     printf("Character\t\tCategory\n");
//     printf("--------------------------------------------\n");

//     for (int i = 0; i < num_char; i++) {
//         char ch = ascii_table[i];
//         printf("%c\t\t", ch);

//         if (isalpha(ch)) {
//             printf(isupper(ch) ? "Alphabet, capital case letter\n" : "Alphabet, small case letter\n");
//         } else if (isdigit(ch)) {
//             printf("Numerical Digit\n");
//         } else {
//             printf("General Printable Character\n");
//         }
//     }

//     return 0;
// }


#include <stdio.h>
#include <ctype.h>

int main() {
    enum { NUM_CHAR = 95 };
    char ascii_table[NUM_CHAR];

    // Initialize array with characters from ASCII 32 to 126
    for (int i = 0; i < NUM_CHAR; i++) {
        ascii_table[i] = i + 32;
    }

    printf("Character\t\tCategory\n");
    printf("--------------------------------------------\n");

    for (int i = 0; i < NUM_CHAR; i++) {
        char ch = ascii_table[i];
        printf("%c\t\t", ch);

        if (isalpha(ch)) {
            printf(isupper(ch)? "Alphabet, capital case letter\n" : "Alphabet, small case letter\n");
        } else if (isdigit(ch)) {
            printf("Numerical Digit\n");
        } else if (ispunct(ch)) {
            printf("Punctuation\n");
        } else {
            printf("General Printable Character\n");
        }
    }

    return 0;
}
