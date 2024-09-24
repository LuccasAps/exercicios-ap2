#include <stdio.h>
#include <stdlib.h>

int dobro(int num){

    num = num * 2;
    return num;
}

int main(){
    int num;
    int resultado;
    printf("Digite um numero:");
    scanf("%d",&num);

    resultado = dobro(num);

    printf("\nO dobro eh %d",resultado);
}
