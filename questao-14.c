#include <stdio.h>
#include <stdlib.h>

//Função para ordenar vetor
void ordena_crescente(float V[], int n)
{
     int i, j;
     float aux;
     for(i=0; i<n-1; i++)
     {
        for(j=i+1; j<n; j++)
        {
            if(V[i] > V[j])
            {
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
     }
}

int main()
{
    float *p;
    int n, i;

    printf("Insira o numero de elementos do vetor: \n");
    scanf("%d", &n);

    //Alocando dinamicamente o espaço necessário
    p = (float*) malloc(n*sizeof(float));

    float A[n];

    //Armazenando os dados em um vetor
    printf("Insira os elementos do vetor: \n");
    for(i=0; i<n; i++)
    {
        scanf("%f", &A[i]);
    }

    ordena_crescente(A,n);

    //Imprimindo o vetor
    for(i=0; i<n; i++)
    {
        printf("%f ", A[i]);
    }

    //Liberando o espaço de memória alocado
    free(p);

    return 0;
}
