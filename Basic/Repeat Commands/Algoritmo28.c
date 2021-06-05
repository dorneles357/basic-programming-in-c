/*
faça um programa que carregue um vetor com dez números interios 
Calcule e mostre os números superiores a 50 em suas respectivas 
posições. Mostrar mensagem senão existir essa condição.
*/

#include <stdio.h>


int main(void){

    //Declaração de variável

    int vetor[10];
    char tem_50;
   
    for (int i = 0; i < 10; i++)
    {
        printf("\nInforme %d/20", (1 + i));
        scanf("%d" &vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > 50)
        {
            printf(" o número %d está na posição %d\n", vetor[i], i  );
            tem_50 = 1;
        }
        
    }
    if (tem_50 < 1)
    {
        printf("não existe");
    }
    
    return 0;
}