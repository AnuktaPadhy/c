// Array of pointers, working with collection of strings (words), changing the constituting characters
// Problem: Change the given strings into capital case
#include <stdio.h>
int main()
{
    // Collection of strings
    char *myStrCollection[3] = {"Computer", "Science", "is Great"};
 
    // Create a pointer variable that will point to current String first byte
    char *currentStrPtVar = 0; // This is valid pointer, not a wild pointer
    char currentStrEachIndividualCharVar;
    // Iterate to each string one by one
    for (int i = 0; i < 3; i++)
    {
        // Iterate to each character of the current string
        // how to get First character (byte) of the string
        currentStrPtVar = myStrCollection[i];
        // This variable is used to move to each character of the current string using pointer
        // This j will act as a counter variable for my do-While
        int j = 0;
        do
        {
            currentStrEachIndividualCharVar = *(currentStrPtVar + j); // Current character in string is extracted here
            // check the chacter is a small case letter, then change into capital case letter, else do
            // nothing with the character
            if (currentStrEachIndividualCharVar >= 97 && currentStrEachIndividualCharVar <= 122) // Is small case?
            {
                currentStrEachIndividualCharVar -= 32;
            }
            // I don't want to print the non-printrable last character of the string which NULL CHARACTER or '\0'
            if (currentStrEachIndividualCharVar != '\0')
            {
                printf("%c", currentStrEachIndividualCharVar);
            }
            j++; // Increment the counter variable
        }
        while (currentStrEachIndividualCharVar != '\0'); // Repeat reading the characters until we reach end of the invidual string by getting '\0' charater at the last
        printf("\n"); // give one extra line after printing each string
    }
    return 0;
}