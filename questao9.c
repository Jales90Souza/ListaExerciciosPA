#include <stdio.h>
#include <stdlib.h>

int main()
{
     //Esse trecho de código imprime os elementos do vetor vet.
     int vet1[] = {4,9,13};
     int i1;
     for(i1=0;i1<3;i1++){
           printf("%d ",*(vet1+i1));
     }

     printf("\n");

     //Esse trecho de código imprime o endereço de memória de cada elemento do vetor vet.
     int vet2[] = {4,9,13};
     int i2;
     for(i2=0;i2<3;i2++){
           printf("%X ",vet2+i2);
      }

     return 0;
}
