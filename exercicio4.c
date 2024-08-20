// Faça um programa que leia 2 valores inteiros, logo após declare dois ponteiros A e B. 
// Cada ponteiro recebe o endereço de uma das variáveis. Imprima o conteúdo para 
// onde cada ponteiro aponta. Logo após troque os endereços dos ponteiros. Após isso, 
// A conterá o valor de B e B terá o valor de A
#include <stdio.h>

int main(){
    int A ,B;
    int *pA = &A;
    int *pB = &B;

    scanf("%d %d",&A ,&B);

    printf("O ponteiro A aponta para %d\n", *pA);
    printf("O ponteiro B aponta para %d\n", *pB);

    int *temp;
    temp = pA;
    pA = pB;
    pB = temp;

    printf("O ponteiro A aponta para %d\n", *pA);
    printf("O ponteiro B aponta para %d\n", *pB);

    return 0;
}