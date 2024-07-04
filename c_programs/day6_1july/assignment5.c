
//
/*
Assignment: Check given string is palindrome. The string should be taken a constant string (string literal), passed to function name 'int IsPalindrom(char *s)'. Use only pointers to work with string.
String literal:
char *myStr = "SomeString";
Inside main():
int result = IsPalindrom(myStr);
// Check if the result = 1, then say Yes it is palindrome else say it is not the palindrome.
Palindrome strings:
aba, madam etc.
has context menu
*/
#include <stdio.h>
#include <stdbool.h>

// Function to check if a given string is a palindrome
bool IsPalindrom(char *s) {
    char *start = s;
    char *end = s;

    // Move the end pointer to the last character of the string
    while (*end != '\0') {
        end++;
    }
    end--; // Move back one position to exclude the null terminator

    // Move the start and end pointers towards each other and compare the characters
    while (start < end) {
        if (*start != *end) {
            return false; // Mismatch found, not a palindrome
        }
        start++;
        end--;
    }

    return true; // No mismatches found, string is a palindrome
}

int main() {
    // Test cases
    char *myStr1 = "aba";
    char *myStr2 = "madam";
    char *myStr3 = "hello";

    // Check if the strings are palindromes
    int result1 = IsPalindrom(myStr1);
    int result2 = IsPalindrom(myStr2);
    int result3 = IsPalindrom(myStr3);

    // Print the results
    if (result1 == 1) {
        printf("IsPalindrom(\"%s\") = Yes, it is a palindrome\n", myStr1);
    } else {
        printf("IsPalindrom(\"%s\") = No, it is not a palindrome\n", myStr1);
    }

    if (result2 == 1) {
        printf("IsPalindrom(\"%s\") = Yes, it is a palindrome\n", myStr2);
    } else {
        printf("IsPalindrom(\"%s\") = No, it is not a palindrome\n", myStr2);
    }

    if (result3 == 1) {
        printf("IsPalindrom(\"%s\") = Yes, it is a palindrome\n", myStr3);
    } else {
        printf("IsPalindrom(\"%s\") = No, it is not a palindrome\n", myStr3);
    }

    return 0;
}