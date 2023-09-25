#include<stdio.h>
main(){
    int n;
    printf("Digite um numero:");
    scanf("%d", &n);

//quando fizer com o for sempre vai ter tres variasveis - (c-- a cada ciclo fizer o contador menos um)
    for(int c = n; c >= 0; c--){
        printf("\n%d", c);
    }



}