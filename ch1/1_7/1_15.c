#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int convert(int m);

main() {
    int fahr, celsius;
    
    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = convert(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}

int convert(int fahr){
    int celsius;
    celsius =  (fahr - 32);
    return celsius;
}