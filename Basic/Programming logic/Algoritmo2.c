// Algoritmo 2

/* 
Faça um algoritmo para calcular o estoque médio de uma peça,
sendo que: 
estoque.médio = ( quandidade.mina + quantidade.máxima)/2
*/

# include <stdio.h>

int main(){
    
    // Declaração de váriaveis 
    int quantidade_minima, quantidade_maxima;
    float estoque_medio;

    //Entradas 
    printf("Informe o valor mínimo");
    scanf("%d", &quantidade_minima);

    printf("Informe o valor maximo");
    scanf("%d", &quantidade_maxima);

    //Processamento
    estoque_medio = (quantidade_minima + quantidade_maxima)/2;

    //Saída
    printf(" O valor do estoque médio é %.2f", estoque_medio);



}