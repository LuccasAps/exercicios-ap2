// Declare duas variáveis inteiras. Leia dois valores inteiros do usuário e armazene nestas 
// variáveis. Use dois ponteiros para trocar o conteúdo dessas duas variáveis. Imprima as 
// variáveis e suas posições de memória antes e depois de trocar os valores.

#include <stdio.h>

int main(){
    int A, B, C;
    int *pA = &A;
    int *pB = &B;

    scanf("%d %d",&A, &B);

    printf("o valor da variavel A eh = %d\no valor da variavel B eh = %d\n",*pA, *pB);
    printf("o endereco da variavel A eh = %u\no endereco da variavel B eh = %u\n",pA, pB);

    C = *pA;
    *pA = *pB;
    *pB = C;

    printf("o valor da variavel A eh = %d\no valor da variavel B eh = %d\n",*pA, *pB);
    printf("o endereco da variavel A eh = %u\no endereco da variavel B eh = %u\n",pA, pB);

    return 0;
}