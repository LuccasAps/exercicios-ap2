#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int num_aluno, nota;
};

int main(){
    int i, j;
    struct aluno m_alunos[3][3];
    struct aluno *p_m_alunos;

    p_m_alunos = &m_alunos[0][0];
    for (i = 0; i < 9; i++)
    {
        scanf("%d %d",&(p_m_alunos+i)->num_aluno,&(p_m_alunos+i)->nota);
    }
    for (i = 0; i < 9; i++)
    {
        printf("%d %d\n\n",(p_m_alunos+i)->num_aluno,(p_m_alunos+i)->nota);
    }

    return 0;
}

