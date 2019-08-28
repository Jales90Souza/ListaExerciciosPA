#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Medindo o tempo da questão 15
int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n, i;
    clock_t t0, tf;
    double tempo_gasto;
    t0 = clock();

    printf("Insira o numero de elementos do vetor: \n");
    scanf("%d", &n);

    float A[n];

    printf("Insira os elementos do vetor: \n");
    for(i=0; i<n; i++)
    {
        scanf("%f", &A[i]);
    }

    qsort (A, n, sizeof(int), comparador);

    for(i=0; i<n; i++)
    {
        printf("%f ", A[i]);
    }

    printf("\n\n");

    tf = clock();
    tempo_gasto = ( (double) (tf - t0) ) / CLOCKS_PER_SEC;
    printf("Tempo gasto: %lf s\n", tempo_gasto);

    //Comparando o tempo medido na execução das implementações dos problemas 15 e 16, foi observado que:
    //o tempo é praticamente o mesmo, por si tratar de programas simples.

    return 0;
}
