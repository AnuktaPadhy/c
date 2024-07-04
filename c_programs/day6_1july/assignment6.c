
/*
Assignment:
Use array pointers to work with 3 strings and prints their uppercase.
Sample1:
Input = India, usa, Russia
Output = INDIA, USA, RUSSIA
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[] = "India";
    char str2[] = "usa";
    char str3[] = "Russia";

    char *arr[3] = {str1, str2, str3};

    for (int i = 0; i < 3; i++) {
        char *ptr = arr[i];
        while (*ptr!= '\0') {
            *ptr = toupper(*ptr);
            ptr++;
        }
        printf("%s, ", arr[i]);
    }

    printf("\n");

    return 0;
}