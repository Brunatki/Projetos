#include <stdio.h>
#include <locale.h>


void impquadrado(int tamn){
    int i;
    int j;

    for(i=0;i<tamn;i++){
        for(j=0;j<tamn;j++){
            if(i==0||i==tamn -1||j==0||j==tamn-1){
            printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
void imparvore(int tamn){
    int i;
    int j;

    for(i=0;i<tamn;i++){
        for(j=0;j<tamn -i -1;j++){
            printf(" ");
            }
            printf("*");
        for( j=0; j<i ; j++){
            printf("I*");
        }
        printf("\n");
        }
}


int main(){

    int opc; //opção do que o usuario deseja fazer
    int tamn; //tamanho desejado

    setlocale(LC_ALL,"portuguese");
    while(1){
    printf("O que deseja imprimir?:\n 1)Árvore\n 2)Quadrado\n 3)Sair do programa\n");
    scanf("%d",&opc);

    if (opc == 3){
        printf("saindo do programa...\n");
        break;
    }
    if(opc==1||opc==2){
        printf("Informe a altura desejada:");
        scanf("%d",&tamn);

        if(opc == 2){
         impquadrado(tamn);

        }else if(opc == 1){
          imparvore(tamn);
        }
    }
    else {
        printf("***ERRO***\n Essa opção não existe. Tente novamente\n\n");

        }
    }
}
















