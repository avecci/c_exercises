/*
Playing with for loops and arrays. This takes cmdline arguments so you can do
./exercise13 a,b,c,d
or you can give the array in code, as is done below.
*/

#include <stdio.h>

int main (int argc, char *argv[])
{
  int i = 0;

  // Go through each cmdline argument using for loop
  // argv[0] is skipped, in case there is no cmdline argument.
  for(i=1; i<argc; i++)
  {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // If you don't want to give the arguments in cmdline every time, you can also specify strings in code:
  // Testing here also how null is printed
  char *maakunnat[] = {"Uusimaa", "Pirkanmaa", '\0', "\0", "Keski-Suomi", "Itä-Suomi"};

  int num_mkunnat = 6;

  for (i=0; i<num_mkunnat; i++)
  {
    printf("Maakunta: %d: %s\n", i, maakunnat[i]);
  }
  return 0;
}
