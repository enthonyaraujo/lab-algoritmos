/* Escreva um algoritmo que leia dois números inteiros e mostre qual deles é o
maior (ou se são iguais). */

#include <stdio.h>

int main()
{

    int n1, n2;

    printf("Digite o primeiro numero: \n");
    scanf("%d",&n1);

    printf("Digite o segundo numero: \n");
    scanf("%d" ,&n2);

    if (n1 == n2)
    {
        printf("Numeros iguais");
    }
    else if (n1 > n2)
    {
        printf("%d maior que %d \n",n1,n2);
    }
    else
    {
        printf("%d menor que %d \n",n1,n2);
    }
    return 0;  
}