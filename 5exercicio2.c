#include <stdio.h>
#include <stdlib.h>

int verify(int num){
    if(num > 0){
        return 1;

    }else if (num < 0){
        return -1;

    }else {
        return 0;
    }
}
int main(){
    int num;
    int resultado;
    printf("Digite um numero:");
    scanf("%d",&num);

    resultado = verify(num);

    printf("\n%d",resultado);

    return 0;
}
