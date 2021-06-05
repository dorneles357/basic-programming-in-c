#include <stdio.h>
#include <math.h>

int main (void){

    //Declaração de variáveis 
      double hip = 0.0, op = 0.0, ad = 0.0;
      double lado;
      char resp [5], resp1[5], resp2[5], resp3[5];

      //Entrada de dados 

      printf("*................ Calculando os lados de um triangulo retângulo...............");
      printf("\n\n tem hipotenusa?");
      gets(resp1);
      
      printf("\n\n Tem cateto adjacente?");
      gets(resp2);

      printf("tem cateto oposto?");
      gets(resp3);
        
    if (resp1 == 'sim' && resp2 == 'sim' && resp3 == 'não')
    {
        printf("Digite o valor do cateto adjacente: ");
        scanf("%f", &ad);
        printf("\n\nDigite o valor do cateto oposto: ");
        scanf("%f", &op);
        hip = sqrt(pow(op, 2) + pow(ad, 2));
        printf("O valor da hipotenusa é %d", a);
    }
    else if (resp1 == 'sim' && resp2 == 'não'  resp3 == 'sim')
    {
        printf("Digite o valor do cateto adjacente: ");
        scanf("%f", &ad);
        printf("\n\nDigite o valor da hipotenusa: ");
        scanf("%f", &hip);
        op = sqrt(pow(ad, 2) - pow(hip, 2));
    }
    else if (resp1 == 'não' && resp2 == 'sim' && resp3 == 'sim')
    {
        printf("Digite o valor do cateto oposto: ");
        scanf("%f", &op);
        printf("\n\nDigite o valor da hipotenusa: ");
        scanf("%f", &hip);
        ad = sqrt(pow(op, 2) - pow(hip, 2));
    }
        return 0;
        
    }
    
    
    


     
     
}