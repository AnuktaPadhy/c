// Class assignment:
// Write  a C program to write 'salary' of employee in text file.
// Write  a C program to read 'salary' of employee from already existing text file.
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    float salary;

    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter employee salary: ");
    scanf("%f", &salary);

    fp = fopen("salary.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    fprintf(fp, "Name: %s\nSalary: %.2f\n", name, salary);
    fclose(fp);

    printf("Salary written to file successfully!\n");
    return 0;
}