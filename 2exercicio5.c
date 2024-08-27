#include <stdio.h>

int main(){
    int i,count=0,aux;
    int *p_aux = &aux;
    int vet_int[10];
    int *ponteiro = &vet_int;
    for(i = 0; i < 10; i++){
        printf("Digite o valor %d:",i);
        scanf("%d",ponteiro + i);
    }
    for(i = 0; i < 10; i++){
        count = i;
        while(count<10){
            if(*(ponteiro + i) > *(ponteiro + count)){
                *p_aux = *(ponteiro + i);
                *(ponteiro + i) = *(ponteiro + count);
                *(ponteiro + count) = *p_aux;
            }
        count++;
        }
    }
    for(i = 0; i < 10; i++){
        printf("%d\n",*(ponteiro + i));
    }
    return 0;
}
