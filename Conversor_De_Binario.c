#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int B1, B2, B3, B4, B5, B6, B7, B8;
    int R1, R2, R3, R4, R5, R6, R7, R8;
    int decimal;
    printf("Insira seu número binário:");
    scanf("%d",& B1);
    printf("Insira seu número binário:");
    scanf("%d",& B2);
    printf("Insira seu número binário:");
    scanf("%d",& B3);
    printf("Insira seu número binário:");
    scanf("%d",& B4);
    printf("Insira seu número binário:");
    scanf("%d",& B5);
    printf("Insira seu número binário:");
    scanf("%d",& B6);
    printf("Insira seu número binário:");
    scanf("%d",& B7);
    printf("Insira seu número binário:");
    scanf("%d",& B8);

    R8 = B8 * 1;
    R7 = B7 * 2;
    R6 = B6 * 4;
    R5 = B5 * 8;
    R4 = B4 * 16;
    R3 = B3 * 32;
    R2 = B2 * 64;
    R1 = B1 * 128;

    decimal = R8 + R7 +R6 + R5 + R4 + R3 + R2 + R1;
    printf("\nDecimal: %d\n", decimal);

    printf("\nOctal: %o\n", decimal);
    printf("\nHexadecimal: %X\n", decimal);

    return 0;

}
