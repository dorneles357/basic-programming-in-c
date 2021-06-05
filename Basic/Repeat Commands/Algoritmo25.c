/*
Escreva um algoritimo que leia dois vetores de 10 posições e faça
a soma dos elementos de mesmo indice, colocando o resultado em um 
terceiro vetor. Mostre o vetor resultante.
*/

#include <stdio.h>

int main(void){

    //Declaração de variáveis
    int vetor1[10], vetor2[10], vetor_soma[10];

  for (int i = 0; i < 10; i++)
  {
    //Entrada de dados
    printf("Informe dez números inteiros:");
    scanf("%d", &vetor1[i]);

    printf("informe dez números inteiros: ");
    scanf("%d", &vetor2[i]);
    //Processamento
    vetor_soma[i] = vetor1[i] + vetor2[i];

  }
    for (int i = 0; i < 10; i++)
    {
        printf("\n\nO vetor resultante é %d", vetor_soma[i]);
    }

}
