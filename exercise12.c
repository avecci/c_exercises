#include <stdio.h>

int main( int argc, char *argv[])
{
  int areas[] = {10,100,1000,10000,100000};
  char name[] = "Antti";
  char full_name[] = {
    'A','n','t','t','i',' ','V','a','i','s','a','n','e','n','\0'
  }; // Doesn't behave well with special letters.

  // Warning: on some system you may have to change %ld in this code to a %u since it will use unsigned ints
  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n", sizeof(areas));
  printf("The number of ints in areas: %ld\n", sizeof(areas)/sizeof(int));
  printf("The first area is %d, the 2nd %d\n", areas[0], areas[1]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("The number of chars: %ld\n", sizeof(name)/sizeof(char));

  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name)/sizeof(char));

  // Assigning \0 to array cuts the array there. Nothing is printed after 0.
  //full_name[4] = '\0';
  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

  return 0;
}
