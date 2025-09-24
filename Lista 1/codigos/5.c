/* Desenvolva um algoritmo que leia um número inteiro e mostre a tabuada
desse número (do 1 ao 10). */

#include <stdio.h>

int main(){

    int n, tabuada;
    printf("Digite o numero: \n");
    scanf("%d",&n);

    printf("Tabuada de %d (Multiplicacao) \n", n);
    for (size_t i = 1; i <= 10; i++)
    {
        tabuada = n*i;
        printf("%dx%ld=%d\n",n,i,tabuada);
    }
    return 0;
}