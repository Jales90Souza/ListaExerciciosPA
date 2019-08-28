#include <stdio.h>
#include <stdlib.h>

const int MAX = 101;

void le_matriz(int V[][MAX], int l, int c)
{
     for(int i=0; i<l; i++)
     {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &V[i][j]);
        }
     }
}

void imprime_matriz(int V[][MAX], int l, int c)
{
     for(int i=0; i<l; i++)
     {
        for(int j=0; j<c; j++)
        {
            printf("%d ", V[i][j]);
        }
        printf("\n");
     }
}

int multiplicacao_matriz(int M1[][MAX], int M2[][MAX], int M3[][MAX], int l, int c1, int c2)
{
     int i, j, k;

        for(i=0; i<l; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<c1; k++)
                {
                    M3[i][j] += M1[i][k]*M2[k][j];
                }
             }
         }
}

int main()
{
     int i, j, nl1, nc1, nl2, nc2, M1[MAX][MAX], M2[MAX][MAX], M3[MAX][MAX];

     printf("Matriz 1\n");
     printf("Insira o numero de linhas da matriz 1: \n");
     scanf("%d",&nl1);
     printf("Insira o numero de colunas da matriz 1: \n");
     scanf("%d",&nc1);
     printf("Insira os elementos da matriz 1: \n");
     le_matriz(M1,nl1,nc1);

     printf("Matriz 2\n");
     printf("Insira o numero de linhas da matriz 2: \n");
     scanf("%d",&nl2);
     printf("Insira o numero de colunas da matriz 2: \n");
     scanf("%d",&nc2);
     printf("Insira os elementos da matriz 2: \n");
     le_matriz(M2,nc2,nc2);
     //Assumimos que o número de colunas da matriz 1 é igual ao número de linhas da matriz 2.

     printf("Matriz 1: \n");
     imprime_matriz(M1,nl1,nc1);
     printf("Matriz 2: \n");
     imprime_matriz(M2,nc1,nc2);
     printf("Resultado da multiplicacao das matrizes (Matriz 3): \n");
     multiplicacao_matriz(M1,M2,M3,nl1,nc1,nc2);
     imprime_matriz(M3,nl1,nc2);

     return 0;
}
