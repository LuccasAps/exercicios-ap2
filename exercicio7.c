#include <stdio.h>

int main(){
    int inteiro;
    int *pi = &inteiro;
    if ((int)pi % 5 == 0)
    {
        printf("O endereco de memoria eh divisivel por 5");
    }
    else{
        printf("O endereco de nao memoria eh divisivel por 5");
    }
    return 0;
}