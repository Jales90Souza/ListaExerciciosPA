#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4], *p, x;

    p = mat + 1;         //Imprime o endereço de memória p do segundo elemento do vetor 'mat'.
    printf("%p \n", p);
    //p = mat++;         //<-- Esse trecho de cógido é inválido, pois essa atribuição não compila.
    //p = ++mat;         //<-- Esse trecho de código é inválido, pois essa atribuição também não compila.
    x = (*mat)++;        //,-- Esse trecho de código também imprime um endereço de memória de um elemento de mat.
    printf("%p", x);

    return 0;
}
