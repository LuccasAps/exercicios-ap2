#include <stdio.h>

int main(){
    int i,j,count=0;
    float mat_float[3][3];
    float *ponteiro = &mat_float;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("o endereço de memoria da posicao %d %d eh: %u\n",i,j,ponteiro + count);
            count++;
        }
    }
    return 0;
}
