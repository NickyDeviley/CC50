#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {

    /*
        Usando moedas de 25, 10, 5 e 1 centavos,
        precisamos criar um algoritmo que analise
        o troco que deve ser devolvido ao cliente
        e retornar o menor número de moedas possível.
    */

    // VARIÁVEIS QUE REPRESENTAM AS MOEDAS
    int vinteCincoCentavos = 25;
    int dezCentavos = 10;
    int cincoCentavos = 5;
    int umCentavo = 1;

    // VARIÁVEIS QUE REPRESENTAM A QUANTIDADE DE MOEDAS
    // DO TROCO TOTAL
    int qtdVinteCinco = 0;
    int qtdDez = 0;
    int qtdCinco = 0;
    int qtdUm = 0;

    // VARIÁVEIS QUE REPRESENTAM O TROCO
    float troco = 0.0f;
    int trocoInteiro = 0;

    // LAÇO QUE RECEBE A ENTRADA DO USUÁRIO
    do {
        troco = get_float("Digite o troco que será devolvido!");
    } while(troco < 0);

    // ARREDONDANDO O VALOR E MULTIPLICANDO POR 100
    trocoInteiro = round(troco * 100);

    // LAÇO QUE VERIFICA QUAL MOEDA UTILIZAR PARA O TROCO
    while(trocoInteiro > 0) {

        if (trocoInteiro >= vinteCincoCentavos) {
            trocoInteiro -= vinteCincoCentavos;
            qtdVinteCinco++;
        }
        else if (trocoInteiro >= dezCentavos) {
            trocoInteiro -= dezCentavos;
            qtdDez++;
        }
        else if (trocoInteiro >= cincoCentavos) {
            trocoInteiro -= cincoCentavos;
            qtdCinco++;
        }
        else {
            trocoInteiro -= umCentavo;
            qtdUm++;
        }

    }

    // RESULTADO DA CONTAGEM DE MOEDAS É IMPRESSO.
    printf("Troco à ser devolvido: %.2f \nTotal de moedas:\n", troco);

    printf("Moedas de 25: %i \n", qtdVinteCinco);
    printf("Moedas de 10: %i \n", qtdDez);
    printf("Moedas de  5: %i \n", qtdCinco);
    printf("Moedas de  1: %i \n", qtdUm);

}
