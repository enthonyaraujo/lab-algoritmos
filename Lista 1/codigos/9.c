/* Peça para o usuário digitar um símbolo especial, um número e uma letra.
Exiba uma "senha" com essa combinação. Exemplo a seguir:
Entrada: @, 7, G
Saída: Sua senha é: @7G */

#include <stdio.h>

int main(){

    char simbolo;
    char letra[1];
    int numero;


    printf("Digite um simbolo:");
    scanf(" %c",&simbolo);
    printf("Digite um numero: \n");
    scanf("%d",&numero);
    printf("Digite um letra: \n");
    scanf("%s",&letra);

    printf("Sua senha é: %c%d%s \n", simbolo,numero,letra);
    return 0;
}