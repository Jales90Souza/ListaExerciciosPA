#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5, *p;

    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    //Supondo que i ocupa o endereço 4094 na memória, então teríamos a seguinte saída:
    //(p: 4094; *p+2: 7; **&p: 5; 3**p: 15; ,**&p+4: 9)

    return 0;
}
