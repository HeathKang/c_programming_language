/*
Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types.
*/
#include <stdio.h>
#include <limits.h>

main(){
  printf("Unsigned char max: %d\n", UCHAR_MAX);
  printf("Signed char max: %d\n", SCHAR_MAX);
  printf("Signed char min: %d\n", SCHAR_MIN);

  unsigned int i = ~0;  // ffffff...
  printf("Unsigned int max: %u\n", i);
  printf("Signed int max: %d\n", i / 2);
  printf("Signed int min: %d\n",  - (i / 2) - 1);
}





