#include<stdio.h>
/*
Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.
*/
#define   MAXLINE 1000
void reverse(char line[], int length);
int getline(char line[], int lim);
void copy(char to[], char from[]);

main(){
    char line[MAXLINE];
    int len;

    while ((len = getline(line, MAXLINE)) > 0){
        reverse(line, len);
        printf("%s\n", line);
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

void reverse(char line[], int length){
    char temp[length];
    int i;

    copy(temp, line);
    for(i=0;i<length;++i){
        line[i] = temp[length - i - 1];// ...\n\0
    }
    line[length] = '\n';
    line[length + 1] = '\0';

}

void copy(char to[], char from[]) {
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}