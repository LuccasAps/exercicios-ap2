#include <stdio.h>
#include <stdlib.h>

#define MAX 1

typedef struct{
    char nome[10];
    float n1,n2,n3;
    int freq;
}Aluno;

float calcmedia(float *n1,float *n2,float *n3){
    float media;
    media = (*n1+*n2+*n3)/3;
    return media;
}
void imprime(char nome[10], float n1, float n2, float n3, int freq){
    printf("%s\n%f %f %f\n%d",nome, n1, n2, n3, freq);
}

int main(){
    Aluno aluno[MAX];
    Aluno *p_aluno;
    p_aluno = &aluno;
    int i;
    for(i=0;i<MAX;i++){
        scanf("%s",aluno[i].nome);
        scanf("%f %f %f",aluno[i].n1, aluno[i].n2, aluno[i].n2);
        scanf("%d",aluno[i].freq);
    }
}
