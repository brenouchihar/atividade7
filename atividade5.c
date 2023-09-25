#include<stdio.h>
main(){
    int contador = 1, pares = 0, soma;

    while(contador <= 50){
        pares += 2;
        soma += pares;
        printf("\n%d %d %d", contador, pares, soma);
        contador++;
    
    }
    printf("%d", soma);




}