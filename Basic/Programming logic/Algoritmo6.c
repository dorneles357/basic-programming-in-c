/* 
Tendo como dado de entradda a altura de uma pessoa, construa um 
algoritmo que calcule seu peso ideal, usando a seguinte formula:
(72.7 * altura) - 58
*/

# include<stdio.h>

int main(){
    //Declaração de variáveis 
    float altura, peso_ideal;

    //Entrada de dados 
    printf("Informe sua altura:");
    scanf("%f", &altura);

    //Processamento dos dados 
    peso_ideal = (72.7 * altura) - 58;

    //saída
    printf("O seu peso idel é %.2f", peso_ideal);
}