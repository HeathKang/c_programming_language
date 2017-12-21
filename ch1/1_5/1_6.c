#include <stdio.h>

/*Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.*/
main() {
    int c;
    printf("%d", EOF);

    while ((c = getchar()) != EOF)
        putchar(c);
}