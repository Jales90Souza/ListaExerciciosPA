#include <stdio.h>
#include <stdlib.h>

void ler_vetor(int V[], int n)
{
     for(int i=0; i<n; i++)
     {
          scanf("%d", &V[i]);
     }
}

int soma_vetor (int A[], int B[], int C[], int n)
{
    for(int i=0; i<n; i++)
    {
        C[i] = A[i] + B[i];
    }
}

int main()
{
    int n, i;
    printf("Informe o tamanho dos vetores: \n");
    scanf("%d", &n);
    int A[n], B[n], C[n];

    printf("Informe os elementos do primeiro vetor: \n");
    ler_vetor(A,n);
    printf("Informe os elementos do segundo vetor: \n");
    ler_vetor(B,n);

    soma_vetor(A,B,C,n);
    printf("Vetor resultante: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}
