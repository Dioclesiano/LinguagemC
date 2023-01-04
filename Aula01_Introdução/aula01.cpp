/*Aqui deve ser escrito comentários em quantas linhas
forem necessário, pois esta combinações de símbolos
permite estes comentários.*/


// Este comando pode ser feito comentários em um única linha.
// Se precisar comentar na linha abaixo, precisa emitir o comando novamente.

// 05/12/2022 - Dioclesiano Paz

#include<stdio.h> // Comando Standard de Input e Output.
//#include<locale.h> // Biblioteca para corrigir bugs de acentos
#include<locale.h>
#include<stdlib.h>

// Este é o menu principal main(), o chefe. Só pode haver um main no programa inteiro.

int main ()
{
    // Aqui será declarado as variáveis
    setlocale(0, "Portuguese"); // Comando para corrigir bugs de acentos


    int numB, numC; // Declaração de variáveis do tipo inteiro
    float numA;
    char letra; // Declaração de char que indica apenas um caracter
    char nome[10]; // Declaração de um Array de char, ou seja um conjunto de 10 caracteres

    printf("Introduza seu nome: \n"); // Exibição de dados na Tela
    scanf("%s", nome); // Guardando na variável nome, os dados inseridos pelo utilizador

    printf("\nDigitou: %s", nome); // O %s indica String
    printf("\nNa posiao 1 esta: %c", nome[0]); // Exibindo o caracter contido na posição 1
    printf("\nNa posicao 4 esta: %c\n\n", nome[3]); // O %c indica um caracter

    /*O comando para exibir os dados do PRINTF("Aqui dentro vai o que é string"); Ex.:

    printf("Hello World!!!");
    Fazendo duas quebras de linhas
    printf("\n\nHello CET 4!!!");*/

    //Fazendo Cálculos
    numA = numB + numC;
    numB = numB + 10; // Incremento de 10 unidades
    numC++; // Incremento de uma unidade;
    numB--; // Decremento de uma unidade;

    // Fazendo uma concatenação de vários valores de tipos diferente
    printf("A = %.2f B = %d e C = %d", numA, numB, numC);

    return 0;
    system("pause");
}
