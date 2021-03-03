
#include<stdlib.h>
#include<stdio.h>

void printArray(int vetor[], int tamanho) 
{ 
    int i; 
    for (i = 0; i < tamanho; i++) 
        printf("%d ", vetor[i]); 
    printf("\n"); 
}

int main()
{
    printf("digite o tamanha do vetor\n");
    int tamanho, *p, i;
    scanf("%d",&tamanho);
    p = (int *) malloc(sizeof(tamanho));

    for(i = 0; i < tamanho; i++){
        p[i] = p++;
    }
    printArray(&p,tamanho);
    free(*p);


    return 0;
}