# include<stdio.h>

/*
Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.*/
 main()
 {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; //lower limit of temperature scale
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;

    printf("convert celsius to fahr: \n");
    while (celsius <= upper) {
        fahr = celsius * 9 / 5 + 32;
        // celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
 }