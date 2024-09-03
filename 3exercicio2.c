#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int tamanho_vet;
    scanf("%d",&tamanho_vet);
    int *pi = malloc(tamanho_vet * sizeof(int));
    for (i = 0; i < tamanho_vet; i++)
    {
        scanf("%d",pi + i);
    }
    for (i = 0; i < tamanho_vet; i++)
    {
        printf("%d\n",*(pi + i));
    }
    free(pi);
    return 0;
}
