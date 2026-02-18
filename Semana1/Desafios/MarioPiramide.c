#include <stdio.h>
#include <cs50.h>

// PROTOTIPAÇÃO DOS MÉTODOS
void desenharPiramideEsquerda(int tamanhoPiramide, int qtdHashes);
void desenharPiramideDireitaPontos(int tamanhoPiramide, int qtdHashes);
void desenharPiramideDireita(int tamanhoPiramide, int qtdHashes);

int main(void) {

    /*
        O usuário deve entrar com um valor
        e o programa deve criar uma pirâmide do
        mário usando hashes.
        Números não podem ser menor que 1 ou maior que 8.
        Esse valor determina o tamanho da pirâmide.

        #
        ##
        ...
    */

    // DECLARANDO A VARIAVEL QUE RECEBE A ENTRADA DO USUÁRIO
    int tamanhoPiramide = 0;
    int qtdHashes = 1;

    // LAÇO QUE SE REPETE ENQUANTO A ENTRADA NÃO FOR VÁLIDA (entre 1 ou 8)
    do {
        tamanhoPiramide = get_int("Digite um número inteiro, entre 1 ou 8\n");
    } while(tamanhoPiramide < 1 || tamanhoPiramide > 8);


    // IMPRIMINDO A PRIMEIRA PIRÂMIDE
    desenharPiramideEsquerda(tamanhoPiramide, qtdHashes);
    printf("\n\n");

    // IMPRIMINDO A SEGUNDA PIRÂMIDE
    desenharPiramideDireitaPontos(tamanhoPiramide, qtdHashes);
    printf("\n\n");

    // IMPRIMINDO A TERCEIRA PIRÂMIDE
    desenharPiramideDireita(tamanhoPiramide, qtdHashes);

}

// MÉTODO QUE CRIA A PRIMEIRA PIRAMIDE
void desenharPiramideEsquerda(int tamanhoPiramide, int qtdHashes) {

    // LAÇO QUE DESENHA A PIRÂMIDE:
    for (int i = 0; i < tamanhoPiramide; i++) {
        // LAÇO QUE DESENHA x HASHES EM CADA LINHA
        for(int j = 0; j < qtdHashes; j++) {
            printf("#");
        }
        printf("\n");
        qtdHashes++;
    }

}

// MÉTODO QUE DESENHA A SEGUNDA PIRÂMIDE
void desenharPiramideDireitaPontos(int tamanhoPiramide, int qtdHashes) {

    // RECEBENDO QUANTIDADE DE PONTOS
    int qtdPontos = (tamanhoPiramide - 1);

    // LAÇO QUE DESENHA A PIRÂMIDE
    for(int i = 0; i < tamanhoPiramide; i++) {

        // LAÇO QUE DESENHA OS PONTOS
        for (int z = 0; z < qtdPontos; z++) {
            printf(".");
        }
        qtdPontos--;

        // LAÇO QUE DESENHA AS HASHES
        for(int j = 0; j < qtdHashes; j++) {
            printf("#");
        }
        printf("\n");
        qtdHashes++;

    }

}

void desenharPiramideDireita(int tamanhoPiramide, int qtdHashes) {

    // RECEBENDO QUANTIDADE DE PONTOS
    int qtdEspacos = (tamanhoPiramide - 1);

    // LAÇO QUE DESENHA A PIRÂMIDE
    for(int i = 0; i < tamanhoPiramide; i++) {

        // LAÇO QUE DESENHA OS ESPAÇOS
        for (int z = 0; z < qtdEspacos; z++) {

            printf(" ");

        }
        qtdEspacos--;

        // LAÇO QUE DESENHA AS HASHES
        for(int j = 0; j < qtdHashes; j++) {
            printf("#");

        }
        printf("\n");
        qtdHashes++;

    }

}
