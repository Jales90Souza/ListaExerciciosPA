#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, *p, *q;

    p = i;
    q = &j;
    p = &*&i;
    //i = (*&)j; //<-- Essa expressão 'ilegal'.
    i = *&j;
    i = *&*&j;
    //q = *p;   //<-- Essa expressão é 'ilegal'.
    //i = (*p)++ + *q;  //<-- Essa expressão é 'ilegal'.

    //Todas as outras expressões são legais.

    return 0;
}
