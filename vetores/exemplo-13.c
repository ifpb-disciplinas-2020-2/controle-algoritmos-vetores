/*
Escreva um programa em linguagem C que leia um vetor de dez números inteiros, 
ordene os valores e imprima o vetor ordenado.
crescente

{18, 17, 23, 32, 25, 22, 10, 28, 45, 9};
{17, 18, 23, 32, 25, 22, 10, 28, 45, 9}; if(numero[i]> numero[i+1])
{17, 18, 23, 25, 32, 22, 10, 28, 45, 9}; if(numero[4]> numero[5]) troca([4] <-> [5])
{17, 18, 23, 25, 22, 32, 10, 28, 45, 9}; if(numero[5]> numero[6]) troca([5] <-> [6])
{17, 18, 23, 25, 22, 10, 32, 28, 45, 9}; if(numero[6]> numero[7]) troca([5] <-> [6])
{17, 18, 23, 25, 22, 10, 28, 32, 45, 9}; if(numero[7]> numero[8]) 
{17, 18, 23, 25, 22, 10, 28, 32, 9, 45}; if(numero[8]> numero[9]) 
*/
#include <stdio.h>
#define TAM 10
int main(){
    int numeros[TAM] = {18, 17, 23, 32, 25, 22, 10, 28, 45, 9};
    int auxiliar;
    for(int i=0; i < TAM; i++){
        for(int j=0; j < TAM -1; j++){
            if(numeros[j] > numeros[j+1]){
                auxiliar     = numeros[j];
                numeros[j]   = numeros[j+1];
                numeros[j+1] = auxiliar;
            }
        }
    }
    for(int i=0; i < TAM; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}