/* Leia um caractere qualquer (como um símbolo: @, #, %, &, etc.) e exiba ele
entre colchetes. */

#include <stdio.h>

int main(){

    char c;

    printf("Digite um simbolo: \n");
    scanf("%c",&c);

    printf("%c \n", c);
    return 0;
}