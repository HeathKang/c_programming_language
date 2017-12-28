/*
Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to
handle quoted strings and character constants properly. C comments don't nest.
*/
#include <stdio.h>

#define MAXLINE 2000

int getline(char s[]);
void eliminate_comment(char s[], int len);

int get_comment_state(char now, char next, int last_comment_state);
int get_qutoed_state(char s, int last_qutoed_state);


main()
{
    char s[MAXLINE];
    int len;

    len = getline(s);
    eliminate_comment(s, len);
    // printf("%s", s);
}

int getline(char s[])
{
    int c, i;
    for(i=0; i < MAXLINE - 1 && (c =getchar())!=EOF; ++i)
        s[i] = c;
    
    s[i+1] = '\0';
    return i+1;
}

void eliminate_comment(char s[], int len)
{   
    int i;
    int comment_state = 0;
    int qutoed_state = 0;
    for(i=0;i<len;i++){
        comment_state = get_comment_state(s[i], s[i+1], comment_state);
        qutoed_state = get_qutoed_state(s[i], qutoed_state);

        if (qutoed_state==0 && comment_state == 0){
            putchar(s[i]);
        } else if (qutoed_state==1 && comment_state==0){
            putchar(s[i]);
        } else if (qutoed_state==0 && comment_state==1){
            
        } else if(qutoed_state==1 && comment_state==1){
            putchar(s[i]);
        }
    }
}

int get_comment_state(char now, char next, int last_comment_state)
{
    int comment_state = last_comment_state;

    if (now=='/' && next == '*'){
        comment_state = 1;
    } else if (now=='*' && next=='/'){
        comment_state = 0;
    } else if (now=='/'&& next=='/'){
        comment_state = 1;
    } else if (last_comment_state==1 && now=='\n'){
        comment_state = 0;
    }
    return comment_state;
}

int get_qutoed_state(char s, int last_qutoed_state)
{
    int qutoed_state = last_qutoed_state;
    if ((s=='"'|| s=='\'' )&& last_qutoed_state == 1){
        qutoed_state = 0;
    } else if ((s=='"'|| s=='\'' )&& last_qutoed_state == 0){
        qutoed_state = 1;
    }
    return qutoed_state;
}