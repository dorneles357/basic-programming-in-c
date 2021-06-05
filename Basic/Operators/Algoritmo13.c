/*
Desenvolva um algoritmo que:
i) leia quatro numeros;
ii) Calcule o quadrado de cada um;
iii) Se o valor o resultante do quadrado do terceiro for >=1000
imprima-o e finalize;
iv) Caso o contrario, imprima os valores lidos em seus respectivos quadrados 
*/


#include<stdio.h>

int main(){

    //Declaraçaõ de vaiáveis
    int a, b, c, d;

    //Entrada de dados 
    printf("Digite um numero inteiro:");
    scanf("%d", &a);
    printf("Digite um numero inteiro:");
    scanf("%d", &b);
    printf("Digite um numero inteiro:");
    scanf("%d",&c);
    printf("Digite um numero inteiro:");
    scanf("%d", &d);

    //Processamento e saída de dados 
     a = a*a;
        b = b*b;
        c = c*b;
        d = d*d;
    
    if (b >= 1000){
       printf("O valor do núemero do quarto numero é %d", b);
    }else{
        printf("O primeiro número é %d\n", a);
        printf("O segundo número é %d\n", b);
        printf("O terceiro número é %d\n", c);
        printf("O quarto número é %d\n", d);   
    }
    
        
}