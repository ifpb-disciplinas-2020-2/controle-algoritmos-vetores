#include <stdio.h>
int main(){
    int idades[10] = {18,17, 25, 32, 28}; // Declarando e inicializando o vetor    
    for(int i=0; i<10; i++){
        printf("indice: %d, valor:%d \n",i,  idades[i]); // i=0 -> 18; i=1 -> 17
    }    
    return 0;
}