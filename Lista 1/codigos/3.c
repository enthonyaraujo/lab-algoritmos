/* Faça um algoritmo que leia um número inteiro e informe se ele é par ou
ímpar. */

#include <stdio.h>

int main(){
    int n;
    
    printf("Digite o numero: \n");
    scanf("%d", &n);

    if (n%2 == 0)
    {
        printf("%d eh par \n", n);
    }
    else
    {
        printf("%d eh impar \n", n);
    }
    return 0;
    
}