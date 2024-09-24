#include <stdio.h>
#include <stdlib.h>

float temp(float num){

    num = (num * 9/5) + 32;

    return num;
}
int main(){
    float num;
    float resultado;
    printf("Digite um numero:");
    scanf("%f",&num);

    resultado = temp(num);

    printf("\n%.1f",resultado);

    return 0;
}
