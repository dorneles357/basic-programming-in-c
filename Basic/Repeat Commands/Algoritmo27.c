/*
Escreva um algoritmo que leia e mostre um vetor de 20 elementos
inteiros, em seguida, mostre a soma de todos os elementos.
*/

#include <stdio.h>

int main(void){

    //Declaração de varável

    int vetor[20], soma = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("\nInsira um número %d/20: ", (i + 1));
        scanf("\n%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("\n%d", soma);
}
