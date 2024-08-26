#include <stdio.h>
#include <stdlib.h>

int main(){
    float a = 12.5, b = 2.5, operacao;
    float *pA = &a;
    float *pB = &b;
    if (((int)pA % 3 == 0) && ((int)pB % 3 == 0))
    {
        operacao = a + b;
        printf("O calculo foi uma Soma :%.4f", operacao);
        return 0;
    }
    if (((int)pA % 5 == 0) || ((int)pB % 5 == 0))
    {
        operacao = a - b;
        printf("O calculo foi uma Subtracao :%.4f", operacao);
        return 0;
    }
    if (abs(((int)pA - (int)pB)))
    {
        operacao = a * b;
        printf("O calculo foi uma Multiplicacao :%.4f", operacao);
        return 0;
    }
    else
    {
        operacao = a / b;
        printf("O calculo foi uma Divisao :%.4f", operacao);
        return 0;
    }
    return 0;
}