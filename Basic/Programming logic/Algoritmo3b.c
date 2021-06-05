#include<stdio.h>
#include<math.h>


int main(void){
    

     //Declaração de variáveis 
       int stop = 0;
       float a = 0, b = 0, c = 0;
    //Entrada de dados 
    printf(" O seguinte programa fornece a hipotenusa de um triâgulo retângulo");
    
   do
   {
       printf(" insira o cateto: ");
       scanf("%f", &a);
       printf("insira o cateto: ");
       scanf("%f", &b);

        //Processamento de dados
       c = sqrt(pow(a, 2) + pow(b, 2));


        //Saída de dados
       printf("A hipotenusa é %.2f", c);

       printf("\n\n Para continuar tecle 1, e 0 para encerrar a operação:");
       scanf("%d", &stop);
   } while (stop == 1);
   return 0;
}

int main(void){
    
}