// Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do 
// teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include <stdio.h>

int main(){
    //declaração da variavel
    int var1, var2;

    //declaração de ponteiros
    int *pvar1 = &var1;
    int *pvar2 = &var2;

    //leitura das variaveis
    scanf("%d %d",&var1, &var2);

    //endereço das variaveis
    printf(" o endereco da variavel var1 eh = %u\n",pvar1);
    printf(" o endereco da variavel var2 eh = %u\n",pvar2);

    if (pvar1 > pvar2)
    {
        printf("O conteudo da variavel de maior endereço eh %d",var1);
    }
    else
    {
        printf("O conteudo da variavel de maior endereço eh %d",var2);
    }
    return 0;
}