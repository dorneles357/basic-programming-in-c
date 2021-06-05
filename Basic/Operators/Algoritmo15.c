/*
A Secretaria de Meio Ambiente que controla o índice de poluição mantém três grupos de indústrias
que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0,05 até 0,25.
Se o índice sobe para 0,3 as indústrias do primeiro grupo são intimadas a suspender suas atividades.
Se o índice crescer para 0,4 as indústrias o primeiro e segundo grupo são intimados a suspender suas
atividades. Se o índice atingir de  0,5 todos os grupos devem ser notificados a paralisar suas atividades.
Faço um algoritmo que lê o índice de poluição medido e emita notificação adequada aos diferentes grupos
de empresas.
*/

#include<stdio.h>

int main(){
    //Declaração de variáveis  
    float indice_p;
    //Entrada de dados 
    printf("Indique o indice de poluição:");
    scanf("%f",&indice_p);
    //Processamento e saída de dados
    if (indice_p >= 0.5){
       printf("Suspender as atividades imediatamente em Grupos 1, 2, 3");
    } else if (indice_p >= 0.4 && indice_p <5){
        printf("Suspender Atividades no Grupo 2");
    }else if (indice_p >= 0.3 && indice_p < 0.4){
        printf("Suspender atividades no Grupo 1");
    }else if (indice < 0.3){
        printf("O indice de poluição está controlado");
    }
    
}
    
    
    
     