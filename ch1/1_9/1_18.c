#include <stdio.h>

#define MAXLINE 1000
/* 
Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines.
*/
int getline(char line[], int maxline);
int getblanktab(char line[], int length); // get number of tailing blanks and tabs 
void remove_tail(char line[], int length); // retain line[length] chars 
void copy(char to[], char from[], int length); // copy to[length] from from[length]

main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    int blank_tab_len; //blanks and tabs length

    blank_tab_len = 0;

    while ((len = getline(line, MAXLINE)) > 0){
        blank_tab_len = getblanktab(line, len);
        remove_tail(line, len-blank_tab_len);
        printf("%s", line);
    }
    return 0;
}

int getline(char s[], int lim){
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

int getblanktab(char line[], int length){
    int i;
    i = 0;
    while ((line[length - i-2] ==' ')||(line[length - i -2] =='\t')) {
        ++i;
    }
    // printf("length of blank %d", i);
    return i;
    
}

void remove_tail(char line[], int length){
    char temp[length];
    copy(temp, line, length);
    copy(line, temp, length-1);
}

void copy(char to[], char from[], int length) {
    int i; 
    i = 0;
    for(i=0; i<length;++i)
        to[i] = from[i];
    to[length + 1] = '\0';
}
