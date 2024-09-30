#include <stdio.h>

unsigned long long fatorial(int N) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= N; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int N;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);
    
    if (N < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
        unsigned long long resultado = fatorial(N);
        printf("Fatorial de %d é: %llu\n", N, resultado);
    }
    
    return 0;
}
