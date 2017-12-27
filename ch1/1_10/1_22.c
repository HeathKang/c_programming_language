/*
Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after
the last non-blank character that occurs before the n-th column of input. Make sure your
program does something intelligent with very long lines, and if there are no blanks or tabs
before the specified column.
*/
#include<stdio.h>

#define numofline 8
#define MAXLINE 1000

int getline(char s[], int len);

void print(char s[], int len);

main()
{
    char line[MAXLINE];
    int len;

    len = getline(line, MAXLINE);
    print(line, len);
}

int getline(char s[], int lim)
{
    int c, i;
    for(i=0; i < lim - 1 && (c =getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void print(char s[], int len)
{
    int i;
    int num=0;
    for(i=0;i<len;++i){
        ++num;
        if (num==numofline){             //1 num == numline 
            if(s[i+1]!=' '){             // 1.1 next is not blank           
                 putchar(s[i]); 
                 putchar('\n');
                 num = 0;
             }else{                      // 1.2 next is blank
                 putchar(s[i]);  
             }
         } else if(num>numofline) {      // 1.2 num > num line 
            if(s[i+1]!=' '){             // 1.2.1 next is not blank
                putchar(s[i]);
                putchar('\n'); 
                num = 0;
            }else{                       // 1.2.2 next is blank
                putchar(s[i]);
            }
         } else {
            putchar(s[i]);
        }
    }
}

