/*
---------------------------------------------------------------------------------------------------- 

            Este programa serve para demonstrar as noções básicas da linguagem C. 
                                As Operações básicas do C: 

                                - Subtração 
                                + Soma 
                                * Multiplicação 
                                % Resto da Divisão   

                            06/12/2022  Dioclesiano Paz
----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main() {
    setlocale(LC_ALL,"");

    // Declaração das variáveis
    int n1, n2;
    float res1, res2, res3, res4;

    // Exibir informações 
    printf("***************************************************************\n");
    printf("**  Programa para efetuar as operações matemáticas básicas.  **\n");
    printf("**      Será solicitado dois números para calcular.          **\n");
    printf("***************************************************************\n");

    // Entrada de Dados
    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &n1); // comando para receber um número inteiro, %d - corresponde a um inteiro 
    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &n2); // comando para receber um número inteiro, %d - corresponde a um inteiro

    // Processamento de dados 
    // Nas variáveis RES ficam guardadas as operações de n1 e n2 

    res1 = n1 + n2;
    res2 = n1 - n2;
    res3 = n1 * n2;
    res4 = n1 / n2;

    // Exibindo Resultados 

    printf("\n\nA soma entre %d + %d = %d\n", n1, n2, n1+n2);
    printf("A subtração entre %d - %d = %.0f\n", n1, n2, res2);
    printf("A Multiplicação entre %d * %d = %.2f\n", n1, n2, res3);
    printf("A Divisão entre %d / %d = %.2f \n\n", n1, n2, res4);

    system("pause"); // Comando do sistema para efetuar uma pausa
    system("cls\n\n"); // Comando para limpar o console após o código 


    // Repetição do código
    printf("***************************************************************\n");
    printf("**  Programa para efetuar as operações matemáticas básicas.  **\n");
    printf("**      Será solicitado dois números para calcular.          **\n");
    printf("***************************************************************\n");

    // Entrada de Dados
    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &n1); // comando para receber um número inteiro, %d - corresponde a um inteiro 
    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &n2); // comando para receber um número inteiro, %d - corresponde a um inteiro

    // Processamento de dados 
    // Nas variáveis RES ficam guardadas as operações de n1 e n2 

    res1 = n1 + n2;
    res2 = n1 - n2;
    res3 = n1 * n2;
    res4 = n1 / n2;

    // Exibindo Resultados 

    printf("\n\nA soma entre %d + %d = %d\n", n1, n2, n1+n2);
    printf("A subtração entre %d - %d = %.0f\n", n1, n2, res2);
    printf("A Multiplicação entre %d * %d = %.2f\n", n1, n2, res3);
    printf("A Divisão entre %d / %d = %.2f \n\n", n1, n2, res4);
}
