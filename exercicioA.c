#include <stdio.h>
#include <stdlib.h>

#define MAX 2

typedef struct{
    char nome[10];
    float n1,n2,n3;
    float media,maior_nota,menor_nota;
    int freq;
}Aluno;

float calcmedia(float *n1, float *n2, float *n3){
    float media;
    media = (*n1+*n2+*n3)/3;

    return media;
}
float Ordena(float *media, float *n1, float *n2, float *n3, float *maior_nota, float *menor_nota){
    *maior_nota = *menor_nota = *n1;

    if(*n1 > *maior_nota) *maior_nota = *n1;
    if(*n2 > *maior_nota) *maior_nota = *n2;
    if(*n3 > *maior_nota) *maior_nota = *n3;

    if(*n1 < *menor_nota) *menor_nota = *n1;
    if(*n2 < *menor_nota) *menor_nota = *n2;
    if(*n3 < *menor_nota) *menor_nota = *n3;
}
void imprime(char nome[10], float media, int freq){
    printf("\n%s\n%.2f\n%d\n",nome, media, freq);
    int sit;
    if(freq >= 75 && media >= 6.0){
        sit = 1;
    }
    else{
        sit = 0;
    }
    if(sit == 1){
        printf("Aprovado\n");
    }
    else{
        printf("Reprovado\n");
    }
}
int main(){
    Aluno aluno[MAX];
    float media_turma = 0;
    int i,j,p,m;
    for(i=0;i<MAX;i++){
        printf("Digite o nome do Aluno %d:",i);
        scanf(" %[^\n]s",aluno[i].nome);
        printf("Digite a nota 1:");
        scanf("%f",&aluno[i].n1);
        printf("Digite a nota 2:");
        scanf("%f",&aluno[i].n2);
        printf("Digite a nota 3:");
        scanf("%f",&aluno[i].n3);
        aluno[i].media = calcmedia(&aluno[i].n1, &aluno[i].n2, &aluno[i].n3);
        Ordena(&aluno[i].media, &aluno[i].n1, &aluno[i].n2, &aluno[i].n3, &aluno[i].maior_nota, &aluno[i].menor_nota);
        printf("Digite a frequencia:");
        scanf("%d",&aluno[i].freq);
        media_turma += aluno[i].media;
    }
        media_turma = media_turma/MAX;
    for(i=0;i<MAX;i++){
        imprime(aluno[i].nome, aluno[i].media, aluno[i].freq);
    }
    for(p=0;p<MAX;p++){
        if (aluno[p].media > media_turma)
        {
            printf("\nMaior nota do aluno %d: %f\nMenor nota do aluno %d: %f",p ,aluno[p].maior_nota ,p ,aluno[p].menor_nota);
        }
    }
}
