#include <stdio.h>
#include <stdlib.h>
typedef struct valores
{
    double duplo;
    int inteiro;
};

int main(){
    int i;
    struct valores vet_valores[4];
    struct valores *p_vet_valores;

    p_vet_valores = vet_valores;

    (*p_vet_valores).duplo = 2.5;
    (*p_vet_valores).inteiro = 2;

    (*(p_vet_valores + 1)).duplo = 3.5;
    (*(p_vet_valores + 1)).inteiro = 3;

    (*(p_vet_valores + 2)).duplo = 4.5;
    (*(p_vet_valores + 2)).inteiro = 4;

    (*(p_vet_valores + 3)).duplo = 5.5;
    (*(p_vet_valores + 3)).inteiro = 5;

    printf("%lf\n%d\n%u\n\n",p_vet_valores->duplo, p_vet_valores->inteiro, p_vet_valores);

    printf("%lf\n%d\n%u\n\n",(p_vet_valores + 1)->duplo, (p_vet_valores + 1)->inteiro, p_vet_valores + 1);

    printf("%lf\n%d\n%u\n\n",(p_vet_valores + 2)->duplo, (p_vet_valores + 2)->inteiro, p_vet_valores + 2);

    printf("%lf\n%d\n%u\n\n",(p_vet_valores + 3)->duplo, (p_vet_valores + 3)->inteiro, p_vet_valores + 3);

}
