#include <stdio.h>  // Biblioteca padrão da linguagem C
#include <cs50.h>   // Biblioteca criada para o curso

/*
    Caso nós declaremos uma função APÓS o método MAIN.
    é obrigatório que nós façamos uma prototipação, assim
    como representado na linha abaixo.
*/
void imprimirHello();

// Método main
int main(void) {

    /*
        Aqui nós chamamos a função criada.
        É como se o código dentro dela estivesse aqui, mas
        resumido em apenas uma linha de código que pode ser
        repetida infinitas vezes e reutilizada em outros
        arquivos através desta mesma linha;
    */
    imprimirHello();

}

/*
    Função que imprime Hello, world!
*/
void imprimirHello() {

    printf("Hello, world!");

}
