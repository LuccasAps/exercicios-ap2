#include <stdio.h>
#include <stdlib.h>


int main(){
    int i,j;
    double vet[5];
    double *pD;
    for (i = 0; i < 5; i++)
    {
        scanf("%lf", &vet[i]);
    }
    *pD = vet[0];
    for (j = 0; i < 5; i++)
    {
        if (*pD > vet[i])
        {
            *pD = vet[i];
        }
    }
    printf("%.2lf",*pD);
    return 0;
}