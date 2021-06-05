/*
Ler uma variável númerica n e imprimi-la somente se a mesma for maior 
que 100, caso o contrário imprimila com o valor zero
*/

#include<stdio.h>

int main(){
    //Declaração de variaveis 
    int n;

    //Entrada de dados 
    printf("Digite um numero:");
    scanf("%d", &n);

    //Processamento de dados e saída 
    if (n >100){
        printf("%d", n);
    } else{ 
        n = 0;
        printf("%d", n);
    }
    
}