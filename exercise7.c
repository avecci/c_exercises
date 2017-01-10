#include <stdio.h>

int main (int argc, char*argv[]){

  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial1 = 'V';
  char initial2 = 'E';
  char first_name[] = "Antti";
  char last_name[] = "Väisänen";

  printf("You are %d kilometers away. \n", distance);
  printf("You have %f levels of power. \n", power);
  printf("You have %f awesome super powers. \n", super_power);
  printf("I have initials %c and %c. \n", initial1, initial2);
  printf("I have a first name %s \n", first_name);
  printf("I have a last name %s \n", last_name);
  printf("My whole name is %s %c %c %s. \n", first_name, initial1, initial2, last_name);

  int bugs = 100;
  double bug_rate = 1.25;

  printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);
  /* Jatkossa tämä eksponenttifunktiolla sitten.
  Eikä määritellä uusia muuttujia keskellä koodia ilman hyvää syytä, vaan kaikki johdonmukaisesti alkuun.
  */
  long universe_of_defects = 1L * 1024L * 1024L * 1024L; //Luvun kasvattaminen liiaksi aiheuttaa kokonaisluvun ylivuodon.
  printf("The entire universe has %ld bugs. \n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs. \n", expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe. \n", part_of_universe);

  //This makes no sense, just a demo of using nul.
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;
  printf("Which means you should care %d%% \n", care_percentage);

  return 0;

}
