/*
Escreva um programa em linguagem C que leia dez números inteiros e, após finalizar a leitura,
 receba um número N e imprima o valor contido na posição N do vetor
*/
#include <stdio.h>
int main(){
    const int TAM =10;
    int numeros[TAM];
    int numero;
    for(int i=0; i < TAM; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }
    printf("Digite um número (índice): ");
    scanf("%d", &numero);
    if(numero < 0 || numero > TAM){
        printf("Digite um número no intervalo de de 0 a 10\n");
    }else{
        printf("Posição %d, valor: %d\n", numero, numeros[numero-1]);
    }
    return 0;
}