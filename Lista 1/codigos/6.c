/* Crie um algoritmo que leia 3 notas de um aluno, calcule a média e informe se
ele foi aprovado (média ≥ 7) ou reprovado. */

#include <stdio.h>

int main(){

    int n1, n2, n3, media;

    printf("Digite a primeira nota: \n");
    scanf("%d",&n1);
    printf("Digite a segunda nota: \n");
    scanf("%d",&n2);
    printf("Digite a terceira nota: \n");
    scanf("%d",&n3);

    media = (n1+n2+n3)/3;

    if (media >= 7)
    {
        printf("Aluno aprovado \n");
    }
    else if ((media >= 3.5) && (media <7))
    {
        printf("Aluno em recuperacao \n");
    }
    else
    {
        printf("Aluno Reprovado \n");
    }
    return 0;
}