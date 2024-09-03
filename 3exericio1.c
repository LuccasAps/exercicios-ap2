#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *pi = malloc(5*sizeof(int));
    for (i = 0; i < 5; i++)
    {
        scanf("%d",pi + i);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n",*(pi + i));
    }
    free (pi);
    return 0;
}
