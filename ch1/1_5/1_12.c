#include <stdio.h>
/*
Exercise 1-12. Write a program that prints its input one word per line.
*/
#define IN 1
#define OUT 0
// count lines, words, and characters in input

main(){
    int c;

    while ((c = getchar()) != EOF ) {
        putchar(c);
        putchar('\n');
    }
    // printf("%d %d %d\n", nl, nw, nc);
}