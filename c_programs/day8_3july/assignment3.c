// Home work assignment:
// Write a C program to write a given string with spaces input by the user to the file using
// character by character method, and then create a new file and write all the content
// of the first file into the second file using character by character method.
// In short, we have create our own C program that will do copy - paste content of one file into another.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    FILE *fp1, *fp2;
    char ch;

    // Get the string from the user
    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // remove the newline character

    // Create the first file and write the string character by character
    fp1 = fopen("file1.txt", "w");
    if (fp1 == NULL)
    {
        printf("Error creating file1.txt\n");
        return 1;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        fputc(str[i], fp1);
    }
    fclose(fp1);

    // Create the second file and copy the content of the first file character by character
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "w");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error creating file2.txt or reading file1.txt\n");
        return 1;
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    printf("Content of file1.txt copied to file2.txt successfully!\n");
    return 0;
}
