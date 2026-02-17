#include <stdio.h>
#include <cs50.h>

int main(void) {

    int x = get_int("x: ");
    int y = get_int("y: ");

    if (x < y) {
        printf("X é menor que Y \n");
    }
    else if (x > y) {
        printf("X é maior que Y \n");
    }
    else {
        printf("X é igual a Y \n");
    }

}
