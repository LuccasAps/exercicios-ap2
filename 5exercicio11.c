#include <stdio.h>

double calcular_serie(int N) {
    double soma = 0.0;
    for (int i = 1; i <= N; i++) {
        int numerador = i * i + 1;
        int denominador = i + 3;
        soma += (double)numerador / denominador;
    }
    return soma;
}

int main() {
    int N;
    printf("Digite um valor inteiro para N: ");
    scanf("%d", &N);
    
    double resultado = calcular_serie(N);
    printf("Resultado da série: %.2f\n", resultado);
    
    return 0;
}
