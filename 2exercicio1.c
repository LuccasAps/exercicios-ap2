#include <stdio.h>

int main(){
    int i;
    float vet_float[10];
    float *ponteiro = &vet_float;
    for(i = 0; i < 10; i++){
        printf("o endereço de memoria da posicao %d eh: %u\n",i,ponteiro + i);
    }
    return 0;
}
