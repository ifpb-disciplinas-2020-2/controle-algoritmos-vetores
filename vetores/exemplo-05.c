/*
Escreva um programa em linguagem C que preencha um vetor com cinco posições 
e, em seguida, exiba apenas os números pares existentes no vetor.
*/
#include <stdio.h>
int main(){
    int numeros[5] = {12, 13, 15, 18,19};
    for(int i=0; i < 5; i++){
        int numero = numeros[i];
        // resto da divisão do número por 2 for igual a Zero
        if(numero % 2 ==0){
            printf("%d \n", numero);
        }
    }
    return 0;
}