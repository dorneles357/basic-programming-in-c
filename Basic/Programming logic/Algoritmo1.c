//Algoritimo1

/*
 Faça um algoritimo para somar dois numeros e multiplicar
 o resultado pelo primeiro numero.
*/

#include <stdio.h>
// std = standard ( Padrão)
// io = input/output (Entrada/saída)

int main(){
    // Declaração de variáveis 
    int num1, num2, soma, multiplicao;

    //Entradas
    printf("informe o primeiro numero:");
    scanf("%d", &num1);

    printf("Informe osegundo numero");
    scanf("%d", &num2);

    //Processamentos 
    soma = num1 + num2;
    multiplicao = soma * num1;

    //Saida
    printf("O resultado da multiplicação é %d", multiplicao);
} 