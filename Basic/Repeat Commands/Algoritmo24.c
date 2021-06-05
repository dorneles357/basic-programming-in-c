/*
Faça um algoritmo que carregue 5 elementos e que em seguida
armazenan em um vetor apenas os numeros pares maiores que 0.
No final deve mostrar os elementos do vetor na tela.
*/

#include <stdio.h>

int main(void){

    //Declação de variáveis
    int vetor[5], pares[5], cont_p = 0;
    for (int i = 0; i < 5; i++)
    {
        //Entrada de dados
        printf("Digito os valores: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
           if (vetor[i] > 0)
           {
               pares[cont_p] = vetor[i];
               cont_p = cont_p + 1;
           }

        }

    }

    for (int i = 0; i < cont_p; i++)
    {
        printf("\n%d\n", pares[i]);
    }

}
