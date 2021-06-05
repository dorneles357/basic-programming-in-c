/*
Escreva um algoritmo gerador de tabuada de qualaquer número
inteiro entre 1 e 10. O usuário deve informar de qual número ele 
deseja ver a tabuada.
*/

#include<stdio.h>

int main(){
    //Declaração de variáveis 
    int a, tab;

    //Entrada de dados 
    printf("\t\tBEM VINDO!!\n\nEsse programa gera tabuadas apenas de 1 a 10.");
    printf("\nInforme um número inteiro para gerar a tabuada: ");
    scanf("%d", &a);

    //Processamento e saída de dados 
    while (a < 1 || a > 10)
    {
        printf("Desculpas, apenas números de um a dez, por favor, tente de novo.");
        printf("\n\nInforme um número inteiro para gerar a tabuada: ");
        scanf("%d", &a);
    }
    
    for (int i = 1; i < 11; i++)
    {
        tab = a*i;
        printf("%d x %d = %d\n", a, i, tab);
    }
    
}