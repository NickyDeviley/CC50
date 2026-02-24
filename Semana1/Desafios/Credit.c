#include <cs50.h>
#include <stdio.h>

string identificarCartao(long numCartao);
bool validarCartao(long numCartao);

int main(void) {

    /*
        Ler o número de um cartão de crédito e
        validar, depois verificar de qual tipo ele é:
        AmericanExpress, MasterCard ou visa.
    */

    // DECLARANDO AS VARIÁVEIS
    long numeroDoCartao = 0;
    bool validade = false;

    // RECEBENDO ENTRADAS DO USUÁRIO
    do {
        numeroDoCartao = get_long("Digite o número do cartão de crédito: ");
    } while(numeroDoCartao <= 0);

    // RETORNA true SE O NUMERO FOR VÁLIDO
    validade = validarCartao(numeroDoCartao);

    // CASO O NÚMERO SEJA VÁLIDO VERIFICA A QUAL
    // INSTITUIÇÃO ELE PERTENCE
    if (validade) {
        printf("Tipo do Cartão: %s \n", identificarCartao(numeroDoCartao));
    }
    // CASO SEJA INVÁLIDO FINALIZA O CÓDIGO
    else {
        printf("Inválido!");
    }

}

string identificarCartao(long numCartao) {

    long copiaNumCartao = numCartao;
    long copiaNumCartao2 = numCartao;
    int qtdNumeros = 0;
    int valor1 = 0;
    int valor2 = 0;

    for(int i = 0; i < 16; i++) {
        if(copiaNumCartao2 > 0) {
            copiaNumCartao2 /= 10;
            qtdNumeros++;
        }
        else {
            break;
        }
    }

    if (qtdNumeros == 15) {
        for(int i = 0; i < qtdNumeros; i++) {
            if ((i + 1) == (qtdNumeros - 1)) {
                valor1 = (copiaNumCartao % 10);
            }
            if ((i + 1) == qtdNumeros) {
                valor2 = copiaNumCartao;
            }
            copiaNumCartao /= 10;
        }
        if (valor2 == 3 && (valor1 == 4 || valor1 == 7)) {
            return "Amex";
        }
    }

    if (qtdNumeros == 13) {
        for(int i = 0; i < qtdNumeros; i++) {
            if ((i + 1) == qtdNumeros) {
                valor1 = copiaNumCartao;
            }
            copiaNumCartao /= 10;
        }
        if (valor1 == 4) {
            return "VISA";
        }
    }
    if (qtdNumeros == 16) {
        for (int i = 0; i < qtdNumeros; i++) {
            if ((i + 1) == (qtdNumeros - 1)) {
                valor1 = (copiaNumCartao % 10);
            }
            if ((i + 1) == qtdNumeros) {
                valor2 = copiaNumCartao;
            }
            copiaNumCartao /= 10;
        }
        if (valor2 == 4) {
            return "VISA";
        }
        if (valor2 == 5) {
            if (valor1 == 1 || valor1 == 2 || valor1 == 3 || valor1 == 4 || valor1 == 5) {
                return "MASTERCARD";
            }
        }
    }
    return "Inválido! \n";
}

// FUNÇÃO QUE VALIDA O CARTÃO
bool validarCartao(long numCartao) {

    // DECLARANDO AS VARIÁVEIS
    int soma1 = 0;
    int soma2 = 0;
    bool validade = false;
    long copiaNumCartao = numCartao;

    // LAÇO PARA VERIFICAR TODOS OS NÚMEROS
    for (int i = 0; i < 16; i++) {

        /*
            O algoritmo verifica o número de trás para frente
        */

        // SE ESTIVER VERIFICANDO UMA QUANTIDADE PAR
        if (((i + 1) % 2) == 0) {

            // VERIFICA SE O NÚMERO MULTIPLICADO POR 2 É MAIOR QUE DEZ
            if (((copiaNumCartao % 10) * 2) >= 10) {

                // ATRIBUÍ O VALOR A UMA VARIÁVEL
                int dobro = ((copiaNumCartao % 10) * 2);

                // QUEBRA O NÚMERO EM DOIS PARA FINALIZAR A CONTA CORRETAMENTE
                for (int j = 0; j < 2; j++) {
                    soma1 += dobro % 10;
                    dobro /= 10;
                }
            }

            // SE O NÚMERO NÃO FOR MAIOR QUE DEZ APENAS SOMA
            else {
                soma1 += ((copiaNumCartao % 10) * 2);
            }
        }

        // SE ESTIVER VERIFICANDO UMA QUANTIDADE IMPAR
        else {
            soma2 += ((copiaNumCartao % 10));
        }

        // SE A QUANTIDADE DE NÚMEROS FINALIZAR ANTES QUE O LOOP
        // O CÓDIGO FINALIZA O LOOP
        if (copiaNumCartao <= 0) {
            break;
        }
        copiaNumCartao /= 10;
    }

    // SOMA OS DOIS VALORES
    int resultado = (soma1 + soma2);

    // VERIFICA SE O ÚLTIMO DÍGITO DO RESULTADO É 0
    // ISSO SIGNIFICA QUE O NÚMERO É VÁLIDO
    if (resultado % 10 == 0) {
        validade = true;
    }

    // RETORNA true SE O NÚMERO FOR VÁLIDO
    return validade;
}
