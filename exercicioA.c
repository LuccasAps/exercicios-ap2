#include <stdio.h>
#include <stdlib.h>

#define MAX 1

typedef struct{
    char nome[10];
    float n1,n2,n3;
    float media
    int freq;
}Aluno;

float calcmedia(float *n1,float *n2,float *n3){
    float media;
    media = (*n1+*n2+*n3)/3;
    return media;
}
int situacao(float media, int freq){
    if(freq >= 75 && media >= 60){
        return 1;
    }
    else{
        return 0;
    }
}
void imprime(char nome[10], float media, int freq, situacao(media,freq)){
    printf("%s\n%f %f %f\n%d",nome, n1, n2, n3, freq);
    if(situacao == 1){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
}

int main(){
    Aluno aluno[MAX];
    Aluno *p_aluno;
    p_aluno = &aluno;
    float media_turma = 0;
    int i;
    for(i=0;i<MAX;i++){
        scanf("%s",aluno[i].nome);
        scanf("%f %f %f",&aluno[i].n1, &aluno[i].n2, &aluno[i].n3);
        aluno[i].media = calcmedia(aluno[i].n1 + aluno.n2 + aluno.n3)/3;
        scanf("%d",&aluno[i].freq);
    }
    for(i=0;i<MAX;i++)
        imprime(aluno[i].nome, aluno[i].media, aluno[i].freq);
}
