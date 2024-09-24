#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadrado(int num, int raiz){
    if((raiz * raiz) == num){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int num ,raiz;
    int resultado;
    printf("Digite um numero:");
    scanf("%d",&num);
    raiz = sqrt(num);

    resultado = quadrado(num,raiz);
    if(resultado == 0){
        printf("Eh quadrado perfeito\n");
    }else{
        printf("Nao eh quadrado perfeito\n");
    }
    return 0;
}
