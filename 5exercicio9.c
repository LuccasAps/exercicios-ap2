#include <stdio.h>
#include <stdlib.h>

int DesenhaTriangulo(int num){
    int i,j=0;
    while(j < (2*num)-1){
        for(i = 0;i <= num; i++){

            printf("*");

        }
        for(i = num; i >= 0; i--){
            printf("*");
        }
        printf("\n");
        j++;
    }
}
int main(){
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);

    DesenhaTriangulo(num);

    return 0;
}
