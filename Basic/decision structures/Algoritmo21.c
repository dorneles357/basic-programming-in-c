/*
Faça um programa que leia o nome de um usuário e a sua senha
e não aceite a senha igual ao nome do usuário, mostrando uma 
mensagem de erro e voltando a pedir as informações.
*/

#include<stdio.h>
#include<string.h>

int main(){
    //Declaração de váriaveis
    char nome[100], senha[100]; 
    //Entrada de dados 
    printf("Informe seu nome: ");
    gets(nome);
    printf("Informe sua senha: ");
    gets(senha);
     //Processamento e saída de dados 
    while(!strcmp(nome, senha))
    {
        printf("O nome e usuário não podem ser identicos!");
        printf("\nInforme seu nome: ");
        gets(nome);
        printf("Informe sua senha: ");
        gets(senha);
    }
    

}
  