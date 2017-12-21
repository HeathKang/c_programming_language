#include <stdio.h>
/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/
//count digits, white space, others;

main(){
    int c, length, i;
    length = 0;

    while ((c = getchar()) != EOF){
        ++length;
    }

    printf("length of input words: %d", length);
    for (i = 0; i < length; ++i)
        printf("#");
    printf("\n");
}