#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a, i;
    a = (int *) calloc(5, sizeof(int));// Arreglo dinamico de 5

// este arreglo lo de arriba lo puedes poner mas adelante y cambiar como
// si fuera una variable lo puedes incrementar o decrementar


    a[0] = 6;
    a[1] = -512;
    a[2] = 2001;
    a[3] = -3;
    a[4] = 10;

    for (i = 0; i < 5; ++i)
        printf("%d\n", a[i]);
    printf("\n");

    free(a);

    return 0;
}
