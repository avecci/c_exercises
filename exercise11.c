/*
Code to demonstrate behaviour of strings and arrays in C
*/
#include <stdio.h>

int main(int argc, char *argv[])
{

  // First way to set up an array and a string.
  // If int numbers[5] = {0}, then all numbers are initialised as 0.
  // Try out int numbers[1] = {1,2,3,4,5}
  int numbers[5] = {1,2,3,4,5};
  char name[6] = {'A','n','t','t','i', '\0'};

  // Print them out
  printf("Numbers: %d %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
  printf("Name each: %c %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4], name[5]);
  //printf("Name each as double: %d %d %d %d %d %d\n", name[0], name[1], name[2], name[3], name[4], name[5]);

  printf("Name: %s \n", name);

  // Another way to assign numbers and strings
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;
  numbers[4] = 5;

  name[0] = 'A';
  name[1] = 'n';
  name[2] = 't';
  name[3] = 't';
  name[4] = 'i';
  name[5] = '\0';

  // Print them just like before
  printf("Numbers: %d %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
  printf("Name each: %c %c %c %c %c %c \n", name[0], name[1], name[2], name[3], name[4], name[5]);
  printf("Name: %s \n", name);

  // Another way to create a string, apparently the better way:
  char *another = "Antti";

  printf("Another: %s \n", another);
  printf("Another each: %c %c %c %c %c \n", another[0], another[1], another[2], another[3], another[4]);

  return 0;
}
