/*
Escreva um programa em linguagem C que armazena duas matrizes (3x3) e, em seguida, 
calcule a soma dos elementos das matrizes e armazene em uma terceira matriz. 
Por fim, a terceira matriz deve ser impressa.
*/
#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3
int main(){
    int primeira[LINHAS][COLUNAS]= {
        {1, 2, 3}, 
        {4, 5, 6},
        {7, 8, 9}
    };
    int segunda[LINHAS][COLUNAS]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int terceira[LINHAS][COLUNAS];

    for(int i=0; i< LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            terceira[i][j] = primeira[i][j] + segunda[i][j]; 
        }
    }
    for(int i=0; i< LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            printf("%d ", terceira[i][j]);
        }
        printf("\n");
    }
    return 0;
}