/*
Printing using functions.
Example on how to use forward declarations
Tasks are put in functions
Main function calls functions, which return objects.
Takes cmdline arguments. Prints ascii values of argument letters.
*/
#include <stdio.h>
#include <ctype.h>

// Forward declarations
// These are used so I can call functions before they are created.
// E.g. in print_arguments I call print_letters, which is created afterwards.
// Forward declaration is a placeholder that tells the program that a variable like this is coming, reserve space for it.

int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
  int i = 0;

  for(i = 0; i < argc; i++)
  {
  print_letters(argv[i]);
  }
}
void print_letters(char arg[])
{
  int i = 0;

  for (i = 0; arg[i] != '\0'; i++)
    {
      char ch = arg[i];
// Print only letters, no digits. Removing reference to can_print it allows for digits to be printed.
      if(can_print_it(ch))
        {
          printf("'%c' == %d ", ch, ch);
        }
    }
  printf("\n");
}
// Print function. Can be omitted.
int can_print_it(char ch)
{
  return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
  print_arguments(argc, argv);
  return 0;
}
