/* Escreva um algoritmo que leia o nome do usuário e exiba uma mensagem de
boas-vindas. */

#include <stdio.h>
#include <string.h>

int main(){

    char nome[50];
    printf("Digite seu nome: \n");
    scanf("%s",&nome);

    printf("Seja bem vindo %s \n", nome);
    return 0;
}