/*
Construa um algoritmo que leia dez valores inteiros e positivos e:
Encontre o maior valor;
Encontre o menor valor;
Calcule a média dos números lidos
*/

#include<stdio.h>

int main(){
    int valor, maior = -990, menor = 999, soma= 0;
    float media;
    //Entrada de dados 
    for (int  i = 0; i < 10; i++)
    {
        printf("informe um valor: ");
        scanf("%d", &valor);
    //Processamento e saida de dados 
    if (valor > 0)
    {
        if (valor > maior)
        {
            maior = valor;
        }
        if (valor < menor )
        {
            menor = valor;
        }
        soma = soma + valor;
    }else
    {
        i--;
    }
    
    
    }
    media = soma/10;
    printf("O maior número é %d", maior);
    printf("\nO menor número é %d", menor);
    printf( "\nA média dos números é %.2f", media);

} 
