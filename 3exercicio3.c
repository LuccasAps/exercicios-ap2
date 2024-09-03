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
        if (ps[i] == 'A'||'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')
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
