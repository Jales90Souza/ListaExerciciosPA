#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i=3,j=5, x2, x3, x4;
    int *p, *q;
    bool x1;

    p = &i;
    q = &j;

    x1 = (p == &i);   //O valor dessa expressão é 'Verdadeiro' ou '1'.
    x2 = (*p - *q);   //O valor dessa expressão é '-2'.
    x3 = (**&p);      //O valor dessa expressão é '3'.
    x4 = (3 - *p/(*q) + 7);  //O valor dessa expressão é '10'.

    printf("%i %d %d %d", x1, x2, x3, x4);

    return 0;
}
