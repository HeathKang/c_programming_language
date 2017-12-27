/*
Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after
the last non-blank character that occurs before the n-th column of input. Make sure your
program does something intelligent with very long lines, and if there are no blanks or tabs
before the specified column.
*/
#include<stdio.h>

#define numofline 8

main()
{
    int c;
    int num = 0;
    int cnum = 0;

    while((c=getchar())!= EOF){
        ++num;
        
        if (num==numofline){
            if(c!=' '){
                putchar(c);
                putchar('\n');
                num = 0;
            }
        } else if(num>numofline) {
            if(c!=' '){
                putchar('\n');
                putchar(c);
                num = 1;
            }
        } else {
            putchar(c);
        }
        
    }
}




