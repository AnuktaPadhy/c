////
/*
Class assignment:
Write a C program that will try to change all characters of string "abc" to capital letters "ABC". Identify in which method you are able to change or not?
Method 1:
Char str[3];
Scanf("%s", str);
Method 2:
Char str[3];
Scanf("[^n]%s", str);
Method 3:
#include <sttring.h>
Char str[3];
Strcpy(str, "abc");
Method 4:
Char str[3] = "abc";
Method 5:
Char str[] = "abc";
Method 6:
Char *str = "abc";


*/
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Method 1
    char str1[3];
    scanf("%s", str1);
    for (int i = 0; i < 3; i++) {
        str1[i] = toupper(str1[i]);
    }
    printf("Method 1: %s\n", str1); // Not changed, because scanf doesn't store the string "abc" in str1

    // Method 2
    char str2[3];
    scanf("%2s", str2); // Note: %2s to prevent buffer overflow
    for (int i = 0; i < 3; i++) {
        str2[i] = toupper(str2[i]);
    }
    printf("Method 2: %s\n", str2); // Not changed, because scanf doesn't store the string "abc" in str2

    // Method 3
    char str3[4]; //size 4 to accommodate the null terminator
    strcpy(str3, "abc");
    for (int i = 0; i < 3; i++) {
        str3[i] = toupper(str3[i]);
    }
    printf("Method 3: %s\n", str3); // Changed to "ABC"

    // Method 4
    char str4[3] = "abc";
    for (int i = 0; i < 3; i++) {
        str4[i] = toupper(str4[i]);
    }
    printf("Method 4: %s\n", str4); // Not changed, because str4 is not null-terminated

    // Method 5
    char str5[] = "abc";
    for (int i = 0; i < 3; i++) {
        str5[i] = toupper(str5[i]);
    }
    printf("Method 5: %s\n", str5); // Changed to "ABC"

    // Method 6
    char *str6 = "abc";
    // str6[0] = 'A'; // This would cause a segmentation fault, because str6 points to a string literal
    printf("Method 6: %s\n", str6); // Not changed, because string literals are read-only

    return 0;
}