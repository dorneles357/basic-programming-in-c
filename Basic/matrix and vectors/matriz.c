#include <stdio.h>

int main(void){


    int mat[2][2] = {{10, 20}, 
                    {30, 40}};

    printf("O valor da linha 0, coluna 0 = %d\n", mat[0][0]);
    printf("O valor da linha 0, coluna 1 = %d\n", mat[0][1]);
    printf("O valor da linha 1, coluna 0 = %d\n", mat[1][0]);
    printf("O valor da linha 1, coluna 1 = %d\n", mat[1][1]);


   return 0;
}

int main (void){

    int m[3][3], i, j;

    printf("\n Digite os elementos da matriz");

    for (int i = 0; i < 3; i++)
        for( int j = 0; j < 3; j++)
    {
        printf("\n elemento[%d][%d] = ", i, j);
        scanf(" %d" , &m[i][j]);
    }
    printf("\n\n Saida de dados");
     for (int i = 0; i < 3; i++)
        for( int j = 0; j < 3; j++)
        {
            printf("\n Elemento[%d][%d] = %d", i, j, m[i][j]);
        }
    return 0;

}