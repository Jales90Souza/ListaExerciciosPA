#include <stdio.h>
#include <stdlib.h>

//A função comparador é a responsável por determinar a ordem dos elementos.
//Da maneira como é determinado o valor de retorno, ela fará a ordenação de forma crescente dos valores do vetor.
int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n, i;

    //Determinar o numero de elementos do vetor
    printf("Insira o numero de elementos do vetor: \n");
    scanf("%d", &n);

    //Declaração do vetor A e do ponteiro p
    float A[n], *p;

    //Usamos malloc para reservar essa quantidade de memória.
    p = (float*) malloc(n*sizeof(float));

    //Ler os elementos do vetor
    printf("Insira os elementos do vetor: \n");
    for(i=0; i<n; i++)
    {
        scanf("%f", &A[i]);
    }

    //A função qsort é utilizada para comparar os dados
    qsort(A, n, sizeof(int), comparador);

    //Imprimindo o vetor depois de ordenado pelo qsort.
    for(i=0; i<n; i++)
    {
        printf("%f ", A[i]);
    }

     //Liberando o espaço de memória alocado.
    free(p);

    return 0;
}
