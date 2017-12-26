/*
Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
When either a tab or a single blank would suffice to reach a tab stop, which should be given
preference?
*/
#include<stdio.h>

#define tab 8

void puttabs(int num);

main()
{
    int c, i;
    int num=0;
    int tabnum=0;
    int state=1;

    while((c=getchar())!=EOF){
        if(c ==' '){
            ++ num;
        } 
        else if (c == '\n') {
            num = 0;
        }
        else {
            if (num == 0){
                putchar(c);
            } else {
                if(num % 8 == 0){
                    tabnum = num/8;
                    puttabs(tabnum);
                    num=0;
                    tabnum=0;
                } else {
                    tabnum = num/8 + 1;
                    puttabs(tabnum);
                    num=0;
                    tabnum=0;
                }
                putchar(c);
            }   
        }
    }  
}

void puttabs(int len)
{   
    int i;
    for(i=len;i>0;--i){
        putchar('\t');
    }
}