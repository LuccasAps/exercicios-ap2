#include <stdio.h>

void triangulo_lateral(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n = 4; 
    triangulo_lateral(n);
    return 0;
}
