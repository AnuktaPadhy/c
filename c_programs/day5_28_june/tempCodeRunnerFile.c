
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