# include<stdio.h>

/*Exercise 1-3. 
Modify the temperature conversion program to print a heading above the table. */
 main()
 {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; //lower limit of temperature scale
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;

    printf("convert fahr to celsius: \n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
 }