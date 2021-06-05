// Faça um algoritmo que peça dois númerso e imprima a soma

#include<stdio.h>

int main(){
    //Declaração de váriaveis 
    int a, b, c;

    //Entrada de dados 
    printf("Insira o primeiro número:");
    scanf("%d", &a);
    printf("Insira o segundo número:");
    scanf("%d", &b);

    //Processamento dos dados 
    c = a + b;

    //Saída
    printf("O resulta é: %d", c);
}