#include <stdio.h>
#include <stdlib.h>

//Aqui, declaramos um ponteiro para função que aceita dois valores do tipo float e retorna um inteiro.
typedef int (*Operacao)(float, float);

//Função que compara dois valores do tipo float
int comparador(float a, float b)
{
  if(a == b){
       return 0;
  }else if (a < b){
       return -1;
  }else{
       return 1;
  }
}

//Função que executa a ordenação
void comparacao(float V[], int n, Operacao p)
{
     int i, j;
     float aux;
     for(i=0; i<n-1; i++)
     {
        for(j=i+1; j<n; j++)
        {
            if(p(V[i],V[j])==1)
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
    int n, i;
    float *p;

    //Determinar o numero de elementos do vetor
    printf("Insira o numero de elementos do vetor: \n");
    scanf("%d", &n);

    //Usamos malloc para reservar a quantidade de memória.
    p = (float*) malloc(n*sizeof(float));

    //Declaração do vetor A
    float A[n];

    //Ler os elementos do vetor
    printf("Insira os elementos do vetor: \n");
    for(i=0; i<n; i++)
    {
        scanf("%f", &A[i]);
    }

    //A função comparacao é utilizada para comparar os dados
    comparacao(A, n, comparador);

    //Imprimindo o vetor depois de ordenado pelo qsort.
    for(i=0; i<n; i++)
    {
        printf("%f  ", A[i]);
    }

     //Liberando o espaço de memória alocado.
    free(p);

    return 0;
}
