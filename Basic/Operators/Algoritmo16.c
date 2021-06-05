/*
Elabore um algoritmo que dada a idade de um nadador classifique em uma das seguintes categorias.  
entre 5 e 7 anos a categoria dele é infantil. Se for entre 8 e 11 anos Infantil B.
Se for entre 12 e 13 juvenil e 14 a 17 Juvenil B e maior que 18 adulto.
*/

#include<stdio.h>

int main(){
    //Declaração de variáveis
    int idade;

    //Entrada de dados
    printf("Informe sua idade:");
    scanf("%d", &idade);

    //Processamento e saída de dados

    if (idade >= 5 && idade <= 7)
    {
        printf("Você está na categoria Infantil");
    }else if (idade >= 8 && idade <= 11 )
    {
        printf("Você esta na categoria Infantil B");
    }else if (idade >= 12 && idade <= 13 )
    {
        printf("Você está na categoria Juvenil");
    }else if (idade >= 14 && idade <= 17)
    {
        printf("Você está na categoria Juvenil B");
    }else if (idade >= 18)
    {
        printf(" Você está na categoria Adulto");
    }else if (idade < 7)
    {
        printf("você não tem idade para entrar na competição");
    }
    
    
    
    
    
     
}