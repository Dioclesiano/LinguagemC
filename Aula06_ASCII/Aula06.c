#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    //char caracter; // Caracter Assinado com valores entre [-128 à 127]
    //unsigned char ascii; // Caractere não assinado com valores entre [0, 255]

    /*  CARACTERES
    Todos os caracteres estão disponíveis no intervalo decimal de números positivos [33 à 126]
    E de números negativos [-223 à -130] */

    /*  NÚMEROS
    Os número em CHAR de 0 à 9 são identificados no intervalo decimal de números positivos [48 à 57]
    E de números negativos [-208 à -199] */
    printf("\n\n\nOs números representados por CHAR no intervalo de [48, 57] são: ");
    for (k = 48; k <= 57; k++)
    {
        printf("%c  ", k); //Chamei os números usando c de CHAR fazendo referência ao intervalo dos números.
    }

    /*  LETRAS MAIÚSCULAS
    O alfabeto maiúsculo em CHAR de A à Z são identificados no intervalo decimal de números positivos [65 à 90]
    E de números negativos [-191 à -166] */
    printf("\n\n\nAs letras MAIÚSCULAS representadas por CHAR no intervalo de [65, 90] são:  ");
    for (k = 65; k < 90; k++)
    {
        putchar(k); // A função putchar retorna o caracter correspondente ao número indicado.
    }

    /*  LETRAS minúsculas
    O alfabeto minúsculo em CHAR de a à z são identificados no intervalo decimal de números positivos [97 à 122]
    E de números negativos [-159 à -134] */
    printf("\n\n\nAs letras minúsculas representadas por CHAR no intervalo de [97, 122] são:  ");
    for (k = 97; k <= 122; k++)
    {
        putchar(k);
    }
    system("pause");
    printf("\n\n\n");
}