/*
Tendo como dados a altura e o sexo de uma pessoa, construa um 
algoritmo que calcule seu peso ideal, utilizando as seguintes formulas:
para homens: (72.7 * altura) - 58
para melheres: (62.1 * altura) - 44.7
*/

int main(){
    //Declaração de variáveis 
    float altura, peso_ideal;
    char sexo;

    //Entrada de variaveis 
    printf("insira sua altura: \n");
    scanf("%f", &altura);
    gets(stdin); // correção do bug
    printf("indique seu sexo?\n");
    scanf("%c", &sexo);

    //Processamento de dados e saída
    if (tolower(sexo) == 'm'){
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é %f ", peso_ideal);
    }
    if (tolower(sexo) == 'f'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %f", peso_ideal);
    }
    if (tolower(sexo) != 'm' && tolower(sexo) != 'f' ){
        printf("Erro grave \n");
    }
    
    
}