/*
Four ways to use pointers. Pointer is an address pointing inside the computer's memory  with a type specifier. Then you fetch the data with it.

With pointers you can as the OS for a chunk of memory and use the pointers to work with it.

1. Just print them via for loop This is using i to index into the array.
2. Create pointers for name and age (*cur_age, **cur_name). Loop through names and ages via pointers plus offset.
Writing *(cur_name + i) is the same as writing name[i] above.
3. Similar to 1, but loop through pointer like an array.
4. Create a loop that initialises cur_name and cur_age to the start of names and ages arrays. Then compare the distance of the pointer cur_age from the start of ages.
Increment both cur_name and cur_age, until we reach end.
*/

#include <stdio.h>

int main( int argc, char *argv[])
{
  // Create two arrays we care about
  int ages[] = {9,12,15,17,13};
  char *names[] = {"Make", "Jonne", "Heikki", "Abdul", "Esa"};

  // Safely get the size of arguments
  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  // First way of using indexing
  for(i = 0; i < count; i++)
  {
    printf("%s on juonut %d vuotta ES:ää.\n", names[i], ages[i]);
  }

  /* Count backwards. count=5, and i is indexed from 0, so we need to start the loop from count-1 to get the numbering correct.
  for(i = count-1; i >= 0; i--)
  {
    printf("%s on juonut %d vuotta ES:ää.\n", names[i], ages[i]);
  }

  */

  printf("---\n");

  // Set up the pointers to the start of the arrays
  int *cur_age = ages;
  char **cur_name = names;

  // Second way of using pointers
  for (i = 0; i < count; i++)
  {
    printf("%s on %d vuotta vanha.\n", *(cur_name + i), *(cur_age + i));
  }

  printf("---\n");

  // Third way of using pointers, pointers are just arrays
  for (i = 0; i < count; i++)
  {
    printf("%s on vieläkin %d vuotta vanha.\n", cur_name[i], cur_age[i]);
  }

  printf("---\n");

  // Fourth way with pointers is a complex way
  for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++)
  {
    printf("%s on elänyt %d vuotta.\n", *cur_name, *cur_age);
  }

  printf("---\n");

  // Point to address instead of its value:
    for (i = 0; i < count; i++)
  {
      //printf("%s on vieläkin %d vuotta vanha.\n", cur_name[i], cur_age[i]); Why adding this loop causes the program to crash? It's just the same loop as above.
      printf("Nimi on osoitteessa %p ja ikä on osoitteessa %p.\n", &cur_name[i], &cur_age[i]);
  }

  printf("---\n");


  return 0;
}
