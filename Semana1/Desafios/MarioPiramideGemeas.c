#include <stdio.h>
#include <cs50.h>

void desenharPiramidesGemeas(int tamanhoPiramides);

int main(void) {

    /*
        Seguindo a mesma lógica do último desafio,
        devemos criar pirâmides, porém elas devem
        ser gêmeas.

           # #
          ## ##
         ### ###
    */

    // DECLARANDO AS VARIÁVEIS
    int tamanhoPiramides = 0;
    int qtdHashes = 1;

    // RECEBENDO O TAMANHO DA PIRÂMIDE
    do {
        tamanhoPiramides = get_int("Digite um número inteiro, entre 1 ou 8\n");
    } while(tamanhoPiramides < 1 || tamanhoPiramides > 8);

    // DESENHANDO A PIRAMIDE
    desenharPiramidesGemeas(tamanhoPiramides);

}

// MÉTODO QUE GERA AS PIRÂMIDES
void desenharPiramidesGemeas(int tamanhoPiramides) {

    // RECEBENDO QUANTIDADE DE ESPACOS
    int qtdEspacos = (tamanhoPiramides - 1);
    int qtdHashes = 1;
    int qtdHashes2 = 1;

    // LAÇO QUE DESENHA A PIRÂMIDE
    for(int i = 0; i < tamanhoPiramides; i++) {
        // LAÇO QUE DESENHA OS ESPAÇOS
        for (int z = 0; z < qtdEspacos; z++) {
            printf(" ");
        }
        qtdEspacos--;

        // LAÇO QUE DESENHA AS HASHES
        for(int j = 0; j < qtdHashes; j++) {
            printf("#");
        }
        printf("  ");
        qtdHashes++;

        // LAÇO QUE DESENHA x HASHES EM CADA LINHA
        for(int j = 0; j < qtdHashes2; j++) {
            printf("#");
        }
        printf("\n");
        qtdHashes2++;
    }
}
