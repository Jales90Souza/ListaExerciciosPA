#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    //Válido -->
    aloha[2] = value;
    printf("%f",value);

    //Inválido -->
    //scanf("%f", &aloha);

    //Inválido -->
    //aloha = value";

    //Inválido -->
    //printf("%f", aloha);

    //Válido -->
    //Suponha que aloha[3] = 6.
    aloha[3] = 6;
    coisas[4][4] = aloha[3];
    printf("\n%f",coisas[4][4]);

    //Inválido -->
    //coisas[5] = aloha;

    //Inválido
    //pf = value;

    //Válido -->
    pf = aloha;
    printf("\n%p",pf);

    return 0;
}
