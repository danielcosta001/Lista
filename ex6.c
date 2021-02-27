#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char valor;
    char naipe;
    bool foiJogada;
}Carta;

typedef struct{
    Carta array[54];
}Baralho;

void criaBaralho(Baralho *deck){
    //deck->array[0].foiJogada = '1';
    //deck->array[0].naipe = 'p';
    //deck->array[0].naipe = 'E';
    //deck->array[0].naipe = 'O';
    //deck->array[0].naipe = 'C';
    //deck->array[0].valor = 'A';
    for (int i = 0; i < 3; ++i) {
        deck->array[i].naipe = 'P';
        deck->array[i].naipe = 'E';
        deck->array[i].naipe = 'O';
        deck->array[i].naipe = 'C';
        deck->array[i].valor = 'A';
        deck->array[i].valor = 'K';
        deck->array[i].valor = 'Q';
        deck->array[i].valor = 'J';
        deck->array[i].valor = 'D';//10 dois simbolos gambiarra
        deck->array[i].valor = '9';
        deck->array[i].valor = '8';
        deck->array[i].valor = '7';
        deck->array[i].valor = '6';
        deck->array[i].valor = '5';
        deck->array[i].valor = '4';
        deck->array[i].valor = '3';

    }
    //Coringas....
    deck->array[52].valor = 'C';
    deck->array[52].naipe = ' ';
    deck->array[52].foiJogada = false;

    deck->array[53].valor = 'C';
    deck->array[53].naipe = ' ';
    deck->array[53].foiJogada = false;
}
void imprimeCarta(Carta c){
    printf("Valor = %c\n",c.valor);
    printf("Naipe = %c\n",c.naipe);
    printf("jogada? %i\n",c.foiJogada);

    for (int i = 0; i <54 ; ++i) {
        //Baralho->array.

    }
}
int cartasNaoJogadas(Baralho *baralho){
    int count=0;
    for (int i = 0; i <baralho->array->foiJogada == false ; ++i) {
        count++;
    }
    printf("Faltam %d cartas no baralho\n",count);
};
Carta topo(Baralho *baralho);
Carta fundo(Baralho *baralho);
Carta* carteado(Baralho *baralho);

void imprimeBaralho(Baralho deck) {
    for(int i = 0; i < 54; i++){
        imprimeCarta(deck.array[i]);
    }
}
int main() {
    char *tar;
    criaBaralho(&tar);
    imprimeBaralho(tar);
    return 0;
}