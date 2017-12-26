#include<stdio.h>
/*
Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?
*/

#define tab 8 

main() 
{
    int c, i;
    int num = 0;
    int bnum = 0;

    while((c=getchar())!=EOF){
        if (c=='\t'){
            bnum = tab - num % tab;
            for(i=bnum; i>0;--i){
                putchar(' ');
            bnum = 0;
            num = 0;
            }
        } else if(c=='\n') {
            num = 0;
            putchar(c);
        } else {
            ++num;
            putchar(c);
        }
    }
}

