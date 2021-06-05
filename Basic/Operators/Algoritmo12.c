/*
Elabore um algoritmo que leia as variáveis 'c' e 'n, respectivamente código
e numero de horas trabalhadas de um operário. calcule o sálario sabendo que ele 
ganha 10,00 por hora.quando o numero de horas exceder a 50  o excesso de pagamento 
da variável 'c', caso contrário zerar tal variavel. A hora excedente de trabalho
vale 20,00. No final imprimir sálrio total e o sálario excedente.
*/

#include<stdio.h>

int main(){
    //Declaração de variáveis 
    float salario_t, salario_e, horas;
    int codigo;

    //Entrada de dados 
    printf("Insira seu código, por favor:");
    scanf("%d", &codigo);
    printf("Informe sua carga horária no mês:");
    scanf("%f", &horas);

    //Entrada e processamnto de dados 
    if (horas > 50){
        salario_e = (horas - 50) * 20;
        salario_t = (horas * 10 - (horas -50))+ salario_e;
        printf("Sálario total: %.2f\n", salario_t);
        printf("extras: %.2f", salario_e);
    }else{
        salario_e = 0;
        salario_t = (horas*10);
        printf("Sálario total: %.2f\n", salario_t);
        printf("extras: %.2f", salario_e);
    }
    
    


}