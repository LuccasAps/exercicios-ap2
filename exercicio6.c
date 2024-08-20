// Declare um inteiro a=10. Declare o ponteiro pa que aponta para a. Imprima os valores 
// *pa e pa. Declare o ponteiro *ppa do tipo inteiro. Faça ppa apontar para pa (dessa 
// forma => ppa = &pa). Imprima *ppa e ppa. Em todas as impressões usa o %d.

#include <stdio.h>
    int main(){
    int a = 10;
    int *pa = &a;
    printf("%d\n%u\n", *pa ,pa);
    unsigned int *ppa = &pa;

    printf("%u\n%u\n",*ppa ,ppa);
    return 0;
}