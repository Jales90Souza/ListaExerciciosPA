#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Assumindo que pulo é um vetor de inteiros
    int pulo[] = {1,2,3,4,5,6,7,8,9};
    int x1, x2, x3, x4;

    x1 = *(pulo + 2);  //<-- Referencia o terceiro terceiro elemento do vetor pulo.
    x2 = *(pulo + 4);  //<-- Não referencia o terceiro terceiro elemento e sim o quinto elemento do vetor pulo.
    x3 = pulo + 4;     //<-- Não referencia o terceiro terceiro elemento e sim o endereço do quinto elemento do vetor pulo.
    x4 = pulo + 2;     //<-- Não referencia o terceiro terceiro elemento e sim o endereço do terceiro vetor pulo.

    printf("%d %d %p %p", x1, x2, x3, x4);

    return 0;
}
