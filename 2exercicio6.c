#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario
{
    char nome[50];
    int salario;
};


int main(){
    struct funcionario funcionarioA;
    struct funcionario *p_funcionarioA;

    p_funcionarioA = &funcionarioA;

    strcpy((*p_funcionarioA).nome, "DAVI");
    (*p_funcionarioA).salario = 5000;

    printf("%s\n",p_funcionarioA->nome);
    printf("%d",p_funcionarioA->salario);

    return 0;
}
