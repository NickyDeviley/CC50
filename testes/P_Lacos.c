#include <stdio.h>
#include <cs50.h>

int main(void) {

    // LAÇO WHILE
    int i = 0;
    while (i < 50) {
        printf("Valor de i: %i \n", i);
        i++;
    }

    // LAÇO FOR
    for (int counter = 0; counter < 50; counter++) {
        printf("Valor de counter: %i", counter);
    }

}
