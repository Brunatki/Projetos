#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    int calculadora;
    float n1 = 0, n2 = 0, resultado;
    double base, p, resultadop, raiz, numero, delta, bhaskara1,bhaskara2,raiz1,raiz2;
    double e2 = 2;
    int  a, b, c;



    setlocale(LC_ALL,"portuguese");

    printf("\nQual operação você deseja fazer?:\n ");
    printf("1)Adição\n 2)Subtração\n 3)Multiplicação\n 4)Divisão\n 5)Exponenciação\n 6)Bhaskara\n");
    scanf("%d", &calculadora);


    if(calculadora == 1){

        printf("escreva sua operação de adição:\n");
        scanf("%f", &n1); printf("+\n");
        scanf("%f", &n2);


        resultado = n1 + n2;

        printf("= %0.2f",resultado);


    }

    if(calculadora == 2){

        printf("escreva sua operação de subtração:\n");
        scanf("%f", &n1); printf("-\n");
        scanf("%f", &n2);


        resultado = n1 - n2;

        printf("= %0.2f",resultado);

    }

    if(calculadora == 3){

        printf("escreva sua operação de multiplicação:\n");
        scanf("%f", &n1); printf("x \n");
        scanf("%f", &n2);


        resultado = n1 * n2;

        printf("= %0.2f",resultado);

    }
    if(calculadora == 4){

        printf("escreva sua operação de divisão:\n");
        scanf("%f", &n1); printf("/ \n");
        scanf("%f", &n2);


        resultado = n1 / n2;

        printf("= %0.2f",resultado);

    }
    if(calculadora == 5){

        printf("escreva sua operação de exponenciação:\n");
        printf("numero da base:"); scanf("%lf", &base);
        printf("expoente:"); scanf("%lf", &p);

        resultadop = pow(base,p);
        printf("%.1lf^%.1lf = %.2lf",base, p, resultadop);


    }
    if(calculadora == 6){

    printf("Digite os valores de A, B e C da equação ax**2 + bx + c = 0\n");
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    printf("Valor de C: ");
    scanf("%d", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    }
    else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raízes da equação são: \n");
        printf("x1 = %.2lf\n", raiz1);
        printf("x2 = %.2lf\n", raiz2);
    }
    }

}


