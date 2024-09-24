#include <stdio.h>
#include <stdlib.h>

int primo(int num){
    if(num < 2){
        return 0;
    }
    for (int i = 2; i*i <= num; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    int resultado;
    printf("Digite um numero:");
    scanf("%d",&num);

    resultado = primo(num);
    if(resultado == 1){
        printf("Eh primo\n");
    }else{
        printf("Nao eh primo\n");
    }
    return 0;
}
