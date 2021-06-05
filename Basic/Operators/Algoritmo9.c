/*
Ler e verificar se ele é par ou é impar, quando for par 
armazenar esse valor em 'p' e quando for impar armazenar em 'i',
exibir 'p' e 'i' no final do processamento.
*/

#include<stdio.h>

int main(){
    //Declaração de variável 
    int valor, p, i;

    //Entarda de dados
    printf("digite um número:");
    scanf("%d", &valor);

    //Processamento e saida de dados 
    if (valor%2 == 0){
        p = valor;
        printf(" O número é par", p);
    }else{
        i = valor;
        printf("O número é impar", i);
    }
    
    
}