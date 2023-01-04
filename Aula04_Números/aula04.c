/*
----------------------------------------------------------------------------------------------------�

            Este programa serve para demonstrar as no��es b�sicas da linguagem C.�
                                As Opera��es b�sicas do C:�

��                              - Subtra��o�
                                + Soma�
                                * Multiplica��o�
                                % Resto da Divis�o���

                            06/12/2022  Dioclesiano Paz
----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main() {
    setlocale(LC_ALL,"");

    // Declara��o das vari�veis
    int n1, n2;
    float res1, res2, res3, res4;

    // Exibir informa��es�
    printf("***************************************************************\n");
    printf("**  Programa para efetuar as opera��es matem�ticas b�sicas.  **\n");
    printf("**      Ser� solicitado dois n�meros para calcular.          **\n");
    printf("***************************************************************\n");

    // Entrada de Dados
    printf("Digite o primeiro n�mero inteiro: \n");
    scanf("%d", &n1); // comando para receber um n�mero inteiro, %d - corresponde a um inteiro�
    printf("Digite o segundo n�mero inteiro: \n");
    scanf("%d", &n2); // comando para receber um n�mero inteiro, %d - corresponde a um inteiro

    // Processamento de dados�
    // Nas vari�veis RES ficam guardadas as opera��es de n1 e n2�

    res1 = n1 + n2;
    res2 = n1 - n2;
    res3 = n1 * n2;
    res4 = n1 / n2;

    // Exibindo Resultados�

    printf("\n\nA soma entre %d + %d = %d\n", n1, n2, n1+n2);
    printf("A subtra��o entre %d - %d = %.0f\n", n1, n2, res2);
    printf("A Multiplica��o entre %d * %d = %.2f\n", n1, n2, res3);
    printf("A Divis�o entre %d / %d = %.2f \n\n", n1, n2, res4);

    system("pause"); // Comando do sistema para efetuar uma pausa
    system("cls\n\n"); // Comando para limpar o console ap�s o c�digo�


    // Repeti��o do c�digo
    printf("***************************************************************\n");
    printf("**  Programa para efetuar as opera��es matem�ticas b�sicas.  **\n");
    printf("**      Ser� solicitado dois n�meros para calcular.          **\n");
    printf("***************************************************************\n");

    // Entrada de Dados
    printf("Digite o primeiro n�mero inteiro: \n");
    scanf("%d", &n1); // comando para receber um n�mero inteiro, %d - corresponde a um inteiro�
    printf("Digite o segundo n�mero inteiro: \n");
    scanf("%d", &n2); // comando para receber um n�mero inteiro, %d - corresponde a um inteiro

    // Processamento de dados�
    // Nas vari�veis RES ficam guardadas as opera��es de n1 e n2�

    res1 = n1 + n2;
    res2 = n1 - n2;
    res3 = n1 * n2;
    res4 = n1 / n2;

    // Exibindo Resultados�

    printf("\n\nA soma entre %d + %d = %d\n", n1, n2, n1+n2);
    printf("A subtra��o entre %d - %d = %.0f\n", n1, n2, res2);
    printf("A Multiplica��o entre %d * %d = %.2f\n", n1, n2, res3);
    printf("A Divis�o entre %d / %d = %.2f \n\n", n1, n2, res4);
}
