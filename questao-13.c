#include <stdio.h>
#include <stdlib.h>

//Basicamente, a finalidade de 'ponteiros para função' é passar uma função como parâmetro para outra função.
//Desse modo, podemos acessar uma função por meio de um ponteiro que aponte para onde a função está na memória.

//Aqui, declaramos um ponteiro para função que aceita dois inteiros e retorna um inteiro.
//Forma 'caixa preta' para definir que operação.
typedef int (*Operacao)(int, int);

//Exemplos simples de como podemos usar
int multiplicacao(int m, int n)
{
    return (m*n);
}

int soma(int m, int n)
{
    return (m+n);
}

//Executa uma operação binária sobre dois operandos
int funcaoexecuta(Operacao p, int a, int b)
{
    return p(a,b);
}

int main()
{
    int x, y;    //Declaração de 2 inteiros

    printf("Digite dois numeros: \n" );
    scanf("%d %d",&x, &y);    //Ler dois inteiros

    printf("Soma = %d\n", funcaoexecuta(soma,x,y));    //Imprime a soma de dois inteiros
    printf("Multiplicacao = %d\n", funcaoexecuta(multiplicacao,x,y));     //Imprime a multiplicação de 2 inteiros

    return 0;
}
