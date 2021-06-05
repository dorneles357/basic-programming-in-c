/*
João da silva, pescador, comprou um microcomputador para controlar o rendimento diário
de seu tabalho. toda vez que ele traz um peso de peixes maior que o estabelecido pelo 
regulamento de pesca do estada de São paulo ( 50  kl) deve pagar uma multa de 4,00 por 
quilo excedente. João precisa que você faça um algoritmo que leia a variavel 'p' peso de peixe 
e na variavel 'm' o valor da multa que ele deverá pagar. Caso contrário mostrar tais variaveis
com o conteudo ' zero'.
*/


#include<stdio.h>

int main (){
    // declaração de variaveis 
    float  peso_peixes, multa;
    char e[8] = "excesso";

    //Entrada de dados 
    printf("Informe o peso:");
    scanf("%f", &peso_peixes);

    //Entrada e processamento de dados 
    if (peso_peixes > 50){
        multa = (peso_peixes - 50) * 4;
        printf("vc pagará uma multa de %.2f", multa);
    }else{
        multa = 0;
        e[0] = 0;
        printf("excesso: %d\n", e[0]);
        printf("sua multa é%2.f \n\n o estado de São Paulo agredece sua cooperção", multa);
    }
    
     
}