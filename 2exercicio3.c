#include <stdio.h>

int main(){
    int i,j;
    int vet_int[5];
    int *ponteiro = &vet_int;
    for(i = 0; i < 5; i++){
        scanf("%d",ponteiro + i);
    }
    for(j = 0; j < 5; j++){
        printf("o dobro do valor na posicao %d eh: %d\n",j ,*(ponteiro + j)*2);
    }
    return 0;
}
