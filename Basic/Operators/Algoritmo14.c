/*
Faça um algoritmo que leia um número inteiro e mostre uma mensagem 
indicando se este número é par ou ímpar se é positivo ou negativo.
*/

#include<stdio.h>

int main(){
    //Declaração das variáveis 
    int n;

    //Entrada de dados 
    printf("Digite um número inteiro:");
    scanf("%d", &n);

    //Processamento e saída de dados 
    if (n%2 == 0){
        printf("Número %d é par", n);
    } else{
        printf("Número %d é impar", n);
    }
    if (n>0){
        printf(" e positivo");
    }else
    {
        printf(" e negativo");
    }
}   
    
    
    
    
    