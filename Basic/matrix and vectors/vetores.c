#include <stdio.h>


int main(void){

    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o valor %d/10: ", (1 + i));
        scanf("%d", &vetor[i]);

    }
   for (int i = 0; i < 10; i++)
   {
       if (vetor[i]  % 2 == 0)
       {
           printf("\n\n numero %d par", vetor[i]);
       }else
       {
           printf("\n\n numero %d impar", vetor[i]);
       }
       
       
   }
   return 0;
}

int main(void){
    int v[5], i;

    for (int i = 0; i < 5; i++)
    {
        v[i] = 0;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n\nvetor[%d] = %d", i, v[i]);
    }
    return 0;
}

int main(void){
    int A[10], B[10];
    int i;
    for (int i = 0; i < 10; i++)
    {
        printf("\n\nDigite o valor %d/10: ", (1 + i));
        scanf("%d", &A[i]);

        B[i] = A[i] * 10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("vetor[%d] = %d\n\n", i, B[i]);
    }
    return 0;
}