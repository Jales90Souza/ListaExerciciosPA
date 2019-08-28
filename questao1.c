#include <stdio.h>

int main(){

     int y[] = {10,27,54,23,17,-7,9,79};
     int *py;
     // Utilizando um ponterio para acessar um array

     py = y;
     for(int i=0; i<8; i++){
         printf("Valor de py = %x\n", py);
         printf("Conteudo de py = %d\n", *py);
         py++;
     }

     //A utilidade do aprendizado de ponteiro nos permite algumas aplicações, dentre elas podemos destacar:
     //a passagem por referência (passa o endereço dos dados ao invés de uma cópia dos mesmos),
     //muito utilizado na passagem e retorno de valores de funções; alocação dinâmica de memória (muito importante);
     //strings; criação de estruturas de dados como listas encadeadas e árvores;
     //além disso, é possível avançar bem mais utilizando ponteiros em programação de mais baixo nível, como em drivers.
     //Podemos destacar também que os ponteiros essencialmente servem para criar ‘indireção’,
     //pode ser muito importante para resolver vários problemas da computação.
     //Portanto, os ponteiros devem ser usados onde não existe outra opção, por falta de uma funcionalidade adequada,
     //ou apenas por questões de desempenho, caso julgar isso um fator determinante na sua aplicação,
     //pois você tem o acesso direto à memória do computador.

     return 0;
}

