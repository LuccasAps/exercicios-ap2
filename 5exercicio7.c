#include <stdio.h>
#include <stdlib.h>

int DesenhaLinha(int num){
    int i;
    for(i = 0;i < num; i++){

        printf("=");

    }
    printf("\n");
}
int main(){
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);

    DesenhaLinha(num);

    return 0;
}
