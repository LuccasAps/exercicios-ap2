#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int tamanho_vet;
    scanf("%d",&tamanho_vet);
    char *ps = malloc(tamanho_vet * sizeof(char));
    for (i = 0; i < tamanho_vet; i++)
    {
        scanf("%c",ps + i);
    }
    /*for (i = 0; i < tamanho_vet; i++){
        printf("%c",*(ps + i));
    }*/
    for (i = 0; i < tamanho_vet; i++)
    {
        if (*(ps+i) == 'A')
        {
            continue;
        }
        if (*(ps+i) == 'E')
        {
            continue;
        }
        if (*(ps+i) == 'I')
        {
            continue;
        }
        if (*(ps+i) == 'O')
        {
            continue;
        }
        if (*(ps+i) == 'U')
        {
            continue;
        }
        if (*(ps+i) == 'a')
        {
            continue;
        }
        if (*(ps+i) == 'e')
        {
            continue;
        }
        if (*(ps+i) == 'i')
        {
            continue;
        }
        if (*(ps+i) == 'o')
        {
            continue;
        }
        if (*(ps+i) == 'u')
        {
            continue;
        }
        else{
            printf("%c",*(ps + i));
            }
    }
    free(ps);
    return 0;
}

