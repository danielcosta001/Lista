/*
Exercıcio 1. [Ponteiros] Um ponteiro pode ser usado para dizer a uma funcao onde ela deve depositar
o resultado de seus calculos. Escreva uma funcao que converta uma quantidade de minutos na notacao
horas/minutos. A funcao recebe como parametro:
• um numero inteiro (totalMinutos); e
• os enderecos de duas variaveis inteiras, horas e minutos.
A funcao deve entao atribuir valores as variaveis passadas por referencia, de modo que os valores atribuıdos
respeitem as seguintes condicoes:
minutos < 60
60 ∗ horas + minutos = totalMinutos
Escreva tambem a funcao principal (main) que use a funcao desenvolvida.
*/

#include <stdio.h>

int func(int TotalMinutos, int *horas, int *minutos ){
    horas = TotalMinutos / 60;
    printf("horas %d\n",horas);
    minutos = TotalMinutos % 60;
    printf("Minutos %d\n",minutos);

}

int main(void)
{
    int min = 93, a ,b;

    func(min,a,b);

    return 0;
}
