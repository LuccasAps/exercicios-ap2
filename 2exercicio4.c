#include <stdio.h>

int main(){
    void *ponteiro;
    int inteiro;
    float flutuante;
    double duplo;
    scanf("%d %f %lf",&inteiro ,&flutuante ,&duplo);
    ponteiro = &inteiro;
    printf("%d\n",*(int *)ponteiro);
    ponteiro = &flutuante;
    printf("%f\n",*(float *)ponteiro);
    ponteiro = &duplo;
    printf("%lf\n",*(double *)ponteiro);
    return 0;
}
