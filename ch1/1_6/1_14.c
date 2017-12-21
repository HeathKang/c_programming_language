#include <stdio.h>
/*
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input.
*/
//count digits, white space, others;

main(){
    int c, nspace, nother, i, j, k;
    int table[62];// 26 character and 10 digit
    for(i =0; i<=62; ++i){
        table[i] = 0;
    }
    // length = 0;
    nspace = nother = 0;

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9') {
            ++table[c - '0'];
        } else if ( c >= 'A' && c <= 'Z') {
            ++table[c - 'A' + 10];
        } else if ( c >= 'a' && c <= 'z') {
            ++table[c - 'a' + 36];
        } else if (c == ' ' || c == '\t' || c =='\b'){
            ++nspace;
        } else {
            ++nother;
        }
    }
    printf("length of input words: ");
    for (i = 0; i < 62; ++ i){
        printf("length of %d:", i);
        for (j = 0; j < table[i]; ++j){
            printf("#");
        }
        printf("\n");
    }

    printf("length of space:");
    for(i=0;i<nspace;++i){
        printf("#");
    }
    printf("\n");

    printf("length of others:");
    for(i=0;i<nother;++i){
        printf("#");
    }
    printf("\n");
}