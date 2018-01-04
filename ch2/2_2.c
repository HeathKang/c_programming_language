/*
Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.
*/
#include <stdio.h>

main(){
    int i=0;
    while(i<8){
        ++i;
        printf("in loop %d \n", i);
    }
}