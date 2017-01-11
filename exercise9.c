#include <stdio.h>

int main (int argc, char *argv[]) {
  int i=0;
  while(i<25){
    if(i==20){
      printf("Reached 20.\n");
      //break;
    }
    printf("%d\n",i);
    i++;
  }
  return 0;
}
