#include <stdio.h>
#include <stdlib.h>

int parouimpar(int num){
    if(num % 2 == 0){
        return 1;
    }
    if(num % 2 != 0){
        return 0;
    }
}
int main(){
    int num;
    int resultado;
    printf("Digite um numero:");
    scanf("%d",&num);

    resultado = parouimpar(num);

    printf("\n%d",resultado);

    return 0;
}
