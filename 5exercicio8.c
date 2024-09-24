#include <stdio.h>
#include <stdlib.h>

int Soma(int num1, int num2){
    int i,soma=0,aux;
    if(num1 > num2){
        aux = num1 - num2;
        for(i = 0;i <= aux;i++){
            soma = soma + (num1 - i);
        }
        return soma;
    }
    if(num2 > num1){
        aux = num2 - num1;
        for(i = 0;i <= aux;i++){
            soma = soma + (num2 - i);
        }
        return soma;
    }
    return 0;
}
int main(){
    int num1, num2,resultado;
    printf("Digite dois numeros:");

    scanf("%d%d",&num1, &num2);

    while(num1 < 0 && num2 < 0){
        scanf("%d%d",&num1, &num2);
    }
    resultado = Soma(num1,num2);

    printf("A soma eh: %d",resultado);
    return 0;
}
