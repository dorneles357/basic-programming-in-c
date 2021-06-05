/*
Faça um algoritmo que conte de 1 a 100 e a cada múltiplo 
de 10 emita uma mensagem:" Multiplo de 10 "
*/

#include<stdio.h>

int main(){
    //Processamento e saída de dados 
    for (int i = 0; i <= 100; i++)
    {
        printf("\n%d", i);
        if ( i % 10 == 0)
        {
            printf("multiplo de 10\n");
        }
        
    }
    

}   
