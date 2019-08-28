#include <stdio.h>

int main()
{
    //Exemplos de arrays de 4 elementos dos 4 tipos seguintes:
    char x[4] = {1, 2, 3, 4};
    int y[4] = {1, 2, 3, 4};
    float z[4] = {1, 2, 3, 4};
    double w[4] = {1, 2, 3, 4};

    //Supondo que depois da declaração dos 4 arrays de 4 elementos o primeiro elemento esteja armazenado no endereço de memória 4092
    //Suponha também que na máquina seja usada uma variável ocupando:
    //do tipo char 1 byte, do tipo int ocupa 2 bytes; do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes.
    //Quais serão os valores de x+1 , x+2 e x+3?

    //Para o tipo char a saída será: x+1 4043, x+2 4044, x+3 4045.
    printf("Char: %p %p %p\n", x+1, x+2, x+3);
    //Para o tipo int a saída será: x+1 4044, x+2 4046, x+3 4048.
    printf("Int: %p %p %p\n", y+1, y+2, y+3);
    //Para o tipo float a saída será: x+1 4046, x+2 404a, x+3 404e.
    printf("Float: %p %p %p\n", z+1, z+2, z+3);
    //Para o tipo double a saída será: x+1 404a, x+2 4052, x+3 405a.
    printf("Double: %p %p %p\n", w+1, w+2, w+3);

    //Se o endereço de memória do primeiro elemento do array for outro, teremos obviamente outra saída, mas com esse mesmo 'padrão'.

    return 0;
}
