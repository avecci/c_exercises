/* Broken code, do not run. This program demonstrates how to debug code using gdb and valgrind.*/

#include <stdio.h>

// A function that causes segfault when called.
void crash() {
  char *test= NULL;
  int i=0;

  for (i=0; i<100000; i++){
    printf("%c", test[i]);
  }

}

int main()
{
  int ika = 29;
  int pituus = 179;

  printf("Olen %d vuotta vanha.\n", ika);
  printf("Olen %d senttimetriä pitkä.\n", pituus);
// Call the crash function:
  crash();

  return 0;
}


/*
Some commands to use gdb and valgrind:
gdb ./exercise4
run
break main
step
step
print age
quit

gdb --batch --ex run --ex bt --ex q --args ./exercise4

valgrind ./exercise4

 */
