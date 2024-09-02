#include <stdio.h>
#include <stdlib.h>

struct ponteiros
{
    int *pi;
    float *pf;
    char *pc;
};

int main(){
    int inteiro;
    float flutuante;
    char letra;
    struct ponteiros var;
    var.pi = &inteiro;
    var.pf = &flutuante;
    var.pc = &letra;

    printf("%d\n%d\n%d",var.pi, var.pf, var.pc);
}
