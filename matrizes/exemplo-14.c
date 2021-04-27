/*
inscricao -> 108 109 
 idade ->     23  18

*/
#include <stdio.h>
#define LINHAS 2
#define COLUNAS 10
int main(){
    int inscricoes[LINHAS][COLUNAS] = {
        {101, 102, 103, 104, 105, 106, 107, 108, 109, 110}, //primeira linha -> inscrições
        {18, 17, 23, 32, 25, 28, 45, 9, 10, 16} // segunda linha -> idades
    };
    for(int i=0; i< LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            printf("%d ", inscricoes[i][j]);
        }
        printf("\n");
    }
    return 0;
}