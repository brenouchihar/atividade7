#include<stdio.h>
main(){
     int multi = 3, contador = 1;
     //cinco multiplos de 3
     while(contador <= 5){
        
        if(multi % 3 == 0){
            printf("\n%d", multi);
            contador++;

        }
        multi++;
         }
}



