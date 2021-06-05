/*
Elabore um algoritmo que leia um número. Se positivo armazene-o em 'a'
se for negativo, em 'b'. No final mostrar o resultado.
*/

#include<stdio.h>


int main(){
    //Declaração de variáveis
    int valor, a, b;

    //Entrada de dados
    printf("Digite um número inteiro:");
    scanf("%d", &valor);

    //Processamento e saída de dados 
    if (valor>0)
    {   a = valor;
        printf("valor positivo", a);
    
    } else
    {   b = valor;
        printf("o valor é negativo", b);
        
    } 
    return()
}
    
    