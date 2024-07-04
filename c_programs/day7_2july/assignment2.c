// Create a C program to define similar type of structure and union.

#include <stdio.h>

struct personStruct
{
  char name[50];
  int aadhaarCard;
  float salary;
  char gender;
};

union personUnion
{
  char name[50];
  int aadhaarCard;
  float salary;
  char gender;
};

int main()
{
  struct personStruct s;
  union personUnion u;

  printf("Size of struct person: %lubytes\n", sizeof(s)); // lu - unsigned long
  printf("Size of union person: %lubytes\n", sizeof(u));  // int (non-neg whole num)
  return 0;
}