#include <stdio.h>
#include <stdlib.h>

int main(void){

     float vet[5] = {1.1,2.2,3.3,4.4,5.5};
     float *f;
     int i;

     f = vet;
     printf("contador/valor/valor/endereco/endereco");

     for(i = 0 ; i <= 4 ; i++){
          printf("\ni = %d",i);                  //Imprime o contador de cada elemento do vetor.
          printf("vet[%d] = %.1f",i, vet[i]);      //Imprime cada valor ou elemento do vetor vet.
          printf("*(f + %d) = %.1f",i, *(f+i));     //Também imprime cada valor ou elemento do vetor vet.
          printf("&vet[%d] = %X",i, &vet[i]);     //Imprime o endereço de memória de cada elemento do vetor vet.
          printf("(f + %d) = %X",i, f+i);         //Tmabém imprime o endereço de memória de cada elemento do vetor vet.
     }
}
