/* 
Ponteiro é tipo de variavel especial que armazena um endereço de memoria
de outra variável.
*/

#include <stdio.h>

int main(void){
    // val é a variavel que sara apontada pelo ponteiro
    int val = 27;

    // declaração da variavel ponteiro

    int *ptr;

    // atribuindo o endereçoo da variavel val ao ponteiro
    ptr = &val;

    printf("utilizando ponteiro\n\n");
    printf("conteudo da variavel val: %d\n", val);
    printf("endereço de variável val: %x\n", &val);
    printf("conteudo da variavel ponteiro ptr: %x", ptr);
    return 0;
}
int main() {

    int x, *ptrx, **pptrx;

    x = 0;

    printf("\nValor de x = %d", x);
    printf("\nEndereço de x: %x \n\n", &x);

    //Atriuido endereços para os ponteiros 
    ptrx = &x;
    pptrx = &ptrx;
    *ptrx = *ptrx + 12;
    printf("Valor de x =  %d", x);
    printf("\nEndereço apontado de *ptrx: %x", ptrx);
    printf("\nO valor da variavel apontado por *ptrx: %d", *ptrx);
    printf("\n Endereço de memória da variavel ptrx: %x", &pptrx);

    **pptrx = *ptrx + 3;
    printf("\n\nO valor de x = %d", x);
    printf(" \nO endereço apontado **pptrx: %x", pptrx);
    printf("\nO endereço de memoria da variavel pptrx: %x", &pptrx);
    printf("\nO valor apontado por pprtx: %d", **pptrx);
    return 0;
}

//Ponteiros função com parâmetro por referência 

//Função
void soma(int x)
{

    x = x + (5);
    printf("\nO resultado para seu cálculo é  %d", x );
    return;
}
void somap(int *x)
{
    *x = *x + 10;
    printf("\nO resulatado para seu calculo é %d", *x);
    return;
}

int main(void) {

//Declaração de variavel
    int num;

//Entrada de dados
printf("Digite um número:");
scanf("%d", &num);
printf("\nO numero digitado foi %d", num);

//Chamada da função
soma(num);
printf("\nO valor antes da soma: %d", num);

//Chamada da função com ponteiro como parametro
somap(&num);
printf("\nO valor antes da somap: %d", num);

    return 0;
}