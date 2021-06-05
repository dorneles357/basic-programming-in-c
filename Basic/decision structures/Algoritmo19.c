/*
Elabore um algoritmo que gera e escreva os numeros impares
entre os numeros 100 e 200.
*/
//obs: imprimir apenas os numeros impares

#include <stdio.h>

int main(){
    //Processamento e saída de dados
    for (int i = 100; i <= 200; i++)
    {
        printf("\n%d", i);
        if (i % 2 != 0)
        {
            printf(" Número impar");
        }
        
    }
     
}