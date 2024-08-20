/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para 
inteiro, real, e char. Associe as variáveis aos ponteiros (use &),Modifique os valores de 
cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a 
modificação*/
#include <stdio.h>

int main(){
    //declaração de variaveis
    int inteiro = 10;
    char caracter = 'A';
    float real = 3.14;

    //declaração de ponteiros
    int *p_inteiro = &inteiro;
    char *p_caracter = &caracter;
    float *p_real = &real;


    //imprimindo valores primarios
    printf("----------VALORES ANTES DA MODIFICACAO----------\n");
    printf("inteiro = %d\n",*p_inteiro);
    printf("real = %.2f\n",*p_real);
    printf("caracter = %c\n",*p_caracter);

    //modificando valores
    *p_inteiro = 20;
    *p_real = 6.28;
    *p_caracter = 'B';

    //imprimindo valores novos
    printf("----------VALORES APOS DA MODIFICACAO----------\n");
    printf("inteiro = %d\n",*p_inteiro);
    printf("real = %.2f\n",*p_real);
    printf("caracter = %c\n",*p_caracter);
    return 0;
}