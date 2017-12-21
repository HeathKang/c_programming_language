#include <stdio.h>

/*Exercise 1-7. Write a program to print the value of EOF.*/
main() {
    int c;
    printf("%d", EOF);

    while ((c = getchar()) != EOF)
        putchar(c);
}