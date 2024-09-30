#include <stdio.h>

unsigned long long fatorial_duplo(int N) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= N; i += 2) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int N;
    printf("Digite um número inteiro positivo ímpar: ");
    scanf("%d", &N);
    
    if (N < 1 || N % 2 == 0) {
        printf("Por favor, insira um número inteiro positivo ímpar.\n");
    } else {
        unsigned long long resultado = fatorial_duplo(N);
        printf("Fatorial duplo de %d é: %llu\n", N, resultado);
    }
    
    return 0;
}
