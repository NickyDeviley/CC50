#include <stdio.h>

// PROTOTIPAÇÃO
void moew(void);

int main(void) {

    // VAMOS SUBISTITUIR POR LOOPS:
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");

    for (int i = 0; i < 3; i++) {

        //printf("meow\n");
        meow(); // CHAMANDO A FUNÇÃO
    }

    // FUNÇÃO MEOW COM PARÂMETRO
    meow(3);

}

// FUNÇÃO MEOW
void meow(void) {
    printf("moew\n");
}

// SOBRECARGA DE FUNÇÕES
void meow(int n) {
    for(int i = 0; i < n; i++) {
        printf("meow\n");
    }
}
