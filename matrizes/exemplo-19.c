/*

Escreva um programa em linguagem C que leia uma matriz quadrada de ordem 4 de números inteiros e um número inteiro N, calcule e imprima a quantidade de vezes o número N aparece dentro da matriz.
*/
#include <stdio.h>
#define LINHAS 2
#define COLUNAS 10
int main(){
    int matriz[][COLUNAS]= {
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6, 7, 8, 9}
    };
    for(int i=0; i< LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}