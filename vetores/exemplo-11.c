/*
Escreva um programa em linguagem C que leia um vetor de cinco posições, 
copie esses valores para um segundo vetor e, em seguida, imprima o segundo vetor.

*/
#include <stdio.h>
#define TAM 5
int main(){
    int numeros[TAM];
    int segundo[TAM];
    for(int i=0; i < TAM; i++){ //0, 1..4
        printf("Digite um número: ");
        scanf("%d", &numeros[i]); //0, 1..4 
    }
    //copiar os valores do vetor numero
    for(int j=0; j < TAM; j++){
        // 18 17 23 32 28
        segundo[j] = numeros[j];
    }
    //imprimindo o segundo vetor
    for(int z=0; z < TAM; z++){
        printf("%d -> %d \n", z, segundo[z]);
    }
    return 0;
}