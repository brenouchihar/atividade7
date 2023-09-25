#include<stdio.h>
main(){
    int n, contador = 1;

    printf("\nDigite um numero:");
    scanf("%d", &n);

  /*1  while(contador <= n){
        printf("\n%d", contador);
        contador += 2;
    }*/
     int impar = 1;
    while(contador <= n){
        impar +=2;
        printf("\n%d %d", contador, impar);
        contador++;
        
    }
}