/* Crie um algoritmo que leia dois números inteiros e exiba a multiplicação
entre eles */

#include <stdio.h>


int main(){

    int n1, n2, multiplicacao;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    multiplicacao = n1*n2;

    printf("%dx%d=%d\n", n1,n2,multiplicacao);

    return 0;

}