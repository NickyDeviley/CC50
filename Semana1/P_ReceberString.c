#include <stdio.h>  // Biblioteca padrão da linguagem c
#include <cs50.h>   // Biblioteca criada para o curso CC50

int main(void) {    // Método main

    /*
        Aqui nós recebemos uma string e armazenamos
        na variável "meuNome".
    */
    string meuNome = get_string("What's your name? ");

    // Concatenando a string "hello, " com a variável criada.
    printf("Hello, %s \n", meuNome);

    /*
        Normalmente, na linguagem de programação C, não existe o tipo de variável String.
        Ela surgiu a partir do C++, um objeto "especial" que armazena texto e funciona como variável.

        Na linguagem C deveriamos utilizar um array de variáveis char, mas graças a biblioteca
        criada para o curso, nós temos acesso a variável String.
    */
}
