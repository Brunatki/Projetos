#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int calculadora;
    int numero = 0;
    char b[9];


    printf("Digite o numero equivalente a calculadora?");
    printf("\nDecimal para binário     (1)\n");
    printf("Decimal para hexadecimal (2)\n");
    printf("Decimal para octal       (3)\n");
    scanf("%d",&calculadora);


    if(calculadora == 1){ //calculadora binaria

        printf("escreva seu número decimal:");
        scanf("%d",&numero);

        _itoa(numero, b,2);

        printf("%d em binário: %c %c %c %c %c %c %c %c", numero, b[0],b[1],b[2],b[3],b[4],b[5],b[6], b[7]);
    }


    if(calculadora == 2 ){ //calculadora de hexadecimal

        printf("escreva seu número decimal:");
        scanf("%d",&numero);

        printf("\n\n%d em hexadecimal:%X\n\n\n",numero, numero );

    }


    if(calculadora == 3 ){ //calculadora de octal

        printf("escreva seu número decimal:");
        scanf("%d",&numero);

        printf("\n\n\n%d em octal: %o\n\n\n", numero, numero);

    }

    return 0;

}
