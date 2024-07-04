// class assignment:
// Create a following C function that reads 'n' characters from the file, character by character,
// show those characters on the screen:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   FILE *fp;
   char str[100];
   int num;

   printf("Enter the number of characters to read: ");
   scanf("%d", &num);

   fp = fopen("input.txt", "r");
   if (fp == NULL)
   {
      printf("Error opening file: %s\n", strerror(errno));
      return 1;
   }

   if (fgets(str, num + 1, fp) != NULL)
   {
      str[strlen(str) - 1] = '\0'; // remove the newline character
      printf("Read %d characters: %s\n", num, str);
   }
   else
   {
      printf("Error reading file.\n");
   }

   fclose(fp);
   return 0;
}