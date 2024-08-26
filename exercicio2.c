// Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
// exiba o maior endereço. Use operadores relacionais de comparação para contemplar o
// exercício.
#include <stdio.h>

int main(){
    int var1 = 10;
    int var2 = 5;
    int *pvar1 = &var1;
    int *pvar2 = &var2;

    printf(" o endereco da variavel var1 eh = %u\n",pvar1);
    printf(" o endereco da variavel var2 eh = %u\n",pvar2);
    if (pvar1 < pvar2)
    {
        printf("O maior endereco eh o da variavel var2");
    }
    else{
        printf("O maior endereco eh o da variavel var1");
    }
    return 0;
}
