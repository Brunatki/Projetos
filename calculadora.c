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

    printf("\nQual opera��o voc� deseja fazer?:\n ");
    printf("1)Adi��o\n 2)Subtra��o\n 3)Multiplica��o\n 4)Divis�o\n 5)Exponencia��o\n 6)Bhaskara\n");
    scanf("%d", &calculadora);


    if(calculadora == 1){

        printf("escreva sua opera��o de adi��o:\n");
        scanf("%f", &n1); printf("+\n");
        scanf("%f", &n2);


        resultado = n1 + n2;

        printf("= %0.2f",resultado);


    }

    if(calculadora == 2){

        printf("escreva sua opera��o de subtra��o:\n");
        scanf("%f", &n1); printf("-\n");
        scanf("%f", &n2);


        resultado = n1 - n2;

        printf("= %0.2f",resultado);

    }

    if(calculadora == 3){

        printf("escreva sua opera��o de multiplica��o:\n");
        scanf("%f", &n1); printf("x \n");
        scanf("%f", &n2);


        resultado = n1 * n2;

        printf("= %0.2f",resultado);

    }
    if(calculadora == 4){

        printf("escreva sua opera��o de divis�o:\n");
        scanf("%f", &n1); printf("/ \n");
        scanf("%f", &n2);


        resultado = n1 / n2;

        printf("= %0.2f",resultado);

    }
    if(calculadora == 5){

        printf("escreva sua opera��o de exponencia��o:\n");
        printf("numero da base:"); scanf("%lf", &base);
        printf("expoente:"); scanf("%lf", &p);

        resultadop = pow(base,p);
        printf("%.1lf^%.1lf = %.2lf",base, p, resultadop);


    }
    if(calculadora == 6){

    printf("Digite os valores de A, B e C da equa��o ax**2 + bx + c = 0\n");
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    printf("Valor de C: ");
    scanf("%d", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        printf("A equa��o n�o possui ra�zes reais.\n");
    }
    else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);

        printf("As ra�zes da equa��o s�o: \n");
        printf("x1 = %.2lf\n", raiz1);
        printf("x2 = %.2lf\n", raiz2);
    }
    }

}


