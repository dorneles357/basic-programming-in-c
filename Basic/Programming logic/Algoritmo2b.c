/*
Faça um algoritmo para calcular o estoque médio de uma peça,
sendo que: 
estoque.médio = ( quandidade.mina + quantidade.máxima)/2
*/

#include<stdio.h>

int main(void){
    float n = 0,m = 0,t = 0;
    int stop;
    do 
    {
        //Entrada de dados;
    printf("Digite o número de mínimo de peças: ");
    scanf("%f", &n);
    printf("\n\nDigite o número máximo de peças: ");
    scanf("%f", &m);
    //Processamento e saida de dados 
    t = (n + m)/2;
    printf("\n\nA média de peças é %.2f", t);
    printf("\n\nPara contininuar tecle 1 para parar tecle 0: \n\n");
    scanf("%d", &stop);

    } while (stop == 1);

    return 0;
    
}
    