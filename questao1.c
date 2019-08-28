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

     //A utilidade do aprendizado de ponteiro nos permite algumas aplica��es, dentre elas podemos destacar:
     //a passagem por refer�ncia (passa o endere�o dos dados ao inv�s de uma c�pia dos mesmos),
     //muito utilizado na passagem e retorno de valores de fun��es; aloca��o din�mica de mem�ria (muito importante);
     //strings; cria��o de estruturas de dados como listas encadeadas e �rvores;
     //al�m disso, � poss�vel avan�ar bem mais utilizando ponteiros em programa��o de mais baixo n�vel, como em drivers.
     //Podemos destacar tamb�m que os ponteiros essencialmente servem para criar �indire��o�,
     //pode ser muito importante para resolver v�rios problemas da computa��o.
     //Portanto, os ponteiros devem ser usados onde n�o existe outra op��o, por falta de uma funcionalidade adequada,
     //ou apenas por quest�es de desempenho, caso julgar isso um fator determinante na sua aplica��o,
     //pois voc� tem o acesso direto � mem�ria do computador.

     return 0;
}

