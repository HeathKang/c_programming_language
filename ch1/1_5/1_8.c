#include <stdio.h>
/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/


#define IN 1
#define OUT 0
// count lines, words, and characters in input

main(){
    int c, nb, nt, nl, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF ) {
        ++ nc;
        if (c == '\n')
            ++ nl;
        if (c == ' ')
            ++ nb;
        if (c == '\t' ) {
            ++ nt;
        }
    }
    printf("%d %d %d\n", nb, nt, nl);
}