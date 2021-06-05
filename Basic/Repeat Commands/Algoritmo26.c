/*
Faça um programa que carregue um vetor de 10 numeros inteiros 
mostre o vetor na ordem inversa a que foi digitado.
*/

#include <stdio.h>

int main(void){

    //Declaração de variável

    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        printf("\nInforme dez números: ");
        scanf("%d", &vetor[i]);
    }
    for (int i = 9; i >= 0; i--)
    {
        printf("\n%d", vetor[i] );
    }

}