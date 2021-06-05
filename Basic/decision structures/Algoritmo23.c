/* 
Sua organização acaba de contartar um estagiario para trabalhar
no suporte de informatica, com aintenção de fazer um levantamento 
nas sucatas encontradas nessa area. a primeira tarefa dele e testar todos
os cerca de duzentos mouses que encontraram la, testando e anotando 
o estado de cada um deles, para verificar o que pode ser reaproveitado.
Foi requisitado que vo^ce desenvolva uma programa para registrar este
levantamento. O programa deverá receber um número indeterminado de
entradas, cada uma contendo:
Um numero de identificação e tipo de defeito:
Necessita de esfera 
Necessita de limpeza 
Necessita de troca de cabo ou conector
quebrado ou inutilizado

Uma identificação igual a zero encerra o programa.


*/

#include<stdio.h>

int main(){
    //Declaração de variáveis 
    int cont_t = 0, con_sit1 = 0, cont_sit2 = 0, cont_sit3 = 0, cont_sit4 = 0, ident, def;

    //Entrada dedos 
    printf("Informe a identificação: ");
    scanf("%d", &ident);
    while (ident != 0)
    {
        printf("1- Necessita de esfera.");
        printf("\n2- Necessita de limpeza.");
        printf("\n3- Necessita de troca de cabo ou conector.");
        printf("\n4- Quebrado ou inutilizado.");
        printf("\nInforme o tipo de defeiro: ");
       scanf("%d", &def);
        //Processamento e saída de dados 
        if (def == 1)
        {
            con_sit1 = con_sit1 + 1;
        }
        if (def == 2)
        {
            cont_sit2 = cont_sit2 + 1;
        }
        if (def == 3)
        {
            cont_sit3 = cont_sit3 + 1;
        }
        if (def == 4)
        {
            cont_sit4 = cont_sit4 + 1;
        }
        cont_t = cont_t + 1;

        //Entrada de dados 
        printf("Informe a identificação: ");
        scanf("%d", &ident);
        
    }

    float p1, p2, p3, p4; //(float) cast
    p1 = ((float) con_sit1/(float)cont_t*100.0);
    p2 = ((float) cont_sit2/(float)cont_t*100.0);
    p3 = ((float) cont_sit3/(float)cont_t*100.0);
    p4 = ((float) cont_sit4/(float)cont_t*100.0);

    printf("Quantidade de mouses %d", cont_t);
    printf("\n\nSituação\t\t\t\tQuantidade\tPercentual");
    printf("\n1- Necessita de esfera\t\t%d \t\t\t%.2f%%\n", con_sit1, p1);
    printf("2- Necessita de limpeza\t\t%d \t\t\t%.2f%%\n", cont_sit2, p2);
    printf("3- Necessita de troca\t\t%d \t\t\t%.2f%%\n", cont_sit3, p3);
    printf("4- Quebrado ou inutilizado\t%d  \t\t\t%.2f%%\n", cont_sit4, p4);
    
}


