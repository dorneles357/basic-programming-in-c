// Faça um algoritmo que converta metros em centimetros 

# include <stdio.h>

int main(){
    //Declaração de variaveis 
    float a, b;

    //Entrada de dados 
    printf(" Insira o valor em metros:");
    scanf("%f", &a);

    //Processamento de dados 
    b = a*100;

    //saída
    printf("O valor em centimetros: %.4f", b);

}