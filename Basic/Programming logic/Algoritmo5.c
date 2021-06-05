/* Faça um algoritmo que pergunte quanto você ganha por hora 
e o número de horas trabalhadas no mês. Calcule e mostre o total
de seu sálario no referido mês*/

#include<stdio.h>

int main(){
    //Declaração de variáveis 
    float valor_hora, horas_trabalhas, salario_mes;

    //Entrada de dados 
    printf("Informe o valor por hora:");
    scanf("%f", &valor_hora);
    printf("informe as horas trabalhadas:");
    scanf("%f", &horas_trabalhas);

    //Processamento
    salario_mes = valor_hora*horas_trabalhas;

    //saída
    printf("O salário do mês é %.2f", salario_mes);
}