#include <cs50.h>
#include <stdio.h>

int main(void) {

    // PEGA VALORES DO USUÁRIO
    int x = get_int("X: ");
    int y = get_int("y: ");

    // IMPRIME A SOMA DOS NÚMEROS
    printf("%i\n", (x + y));

}
