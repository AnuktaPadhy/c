// https://leetcode.com/problems/fizz-buzz/description/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **fizzBuzz(int n, int *returnSize)
{
    char **result = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        result[i] = (char *)malloc(9 * sizeof(char));
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            strcpy(result[i - 1], "FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            strcpy(result[i - 1], "Fizz");
        }
        else if (i % 5 == 0)
        {
            strcpy(result[i - 1], "Buzz");
        }
        else
        {
            sprintf(result[i - 1], "%d", i);
        }
    }

    *returnSize = n;
    return result;
}

int main()
{
    int n = 15;
    int returnSize;
    char **result = fizzBuzz(n, &returnSize);

    for (int i = 0; i < returnSize; i++)
    {
        printf("%s\n", result[i]);
    }

    // Don't forget to free the memory!
    for (int i = 0; i < returnSize; i++)
    {
        free(result[i]);
    }
    free(result);

    return 0;
}