#include <stdio.h>
#include <stdlib.h>
int main(){

    int a, b, c;
    int *pA = &a;
    int *pB = &b;
    scanf("%d %d %d", &a, &b ,&c);
    if (*pA > *pB)
    {
       *pB = c;
       if (*pA > *pB)
       {
        printf("o maior valor é %d",*pA);
        return 0;
       }

    }else
    {
        *pA = c;
        printf("%d", *pA);
        if (*pB > *pA)
        {
            printf("o maior valor é %d",*pB);
            return 0;
        }else{
            printf("o maior valor é %d",*pA);
            return 0;
        }
    }
    return 0;
}
