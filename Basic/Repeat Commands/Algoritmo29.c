/*
Faça um programa que receba um código numérico inteiro
e um vetor de 5 posições de números reais. Se o código for zero, 
termine o programa. Se o código for um, mostre o vetor 
na forma direta. o código for dois, mostre o vetor na ordem 
inversa

*/

#include <stdio.h>

int main(void){

    //Declaração de variáveis 
   float vetor[5];
   int codigo;

   //Entrada de dados 
printf("Digite o código: ");
scanf("%d", &codigo);
if (codigo != 0)
{
    for (int i = 0; i < 5; i++)
{
    printf("\nDigite o numero %d/5: ", (1 + i));
    scanf("%f", &vetor[i]);
}
    if (codigo == 1)
    {
       for (int i = 0; i < 5; i++)
       {
            printf("%f\n", vetor[i]);
       }
        
       
    }
    else if (codigo == 2)
    {
        for (int i = 4; i >= 0; i--)
        {
            printf("%f\n", vetor[i]);
        }
    }    
}
return 0;
}





