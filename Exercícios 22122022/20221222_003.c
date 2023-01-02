//
// Created by victo on 02/01/2023.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, soma = 0;

    for (i = 1; i <= 100; i += 2)// 500
        soma += i; // soma = soma + i -> 500
    printf("Soma dos impares de 1 a 100: %d\n\n", soma);

        int  cont = 0, sompar = 0;
        while(cont != 100){
            if(cont%2 == 0){
                sompar += cont ;
            }
            ++cont;
        }
        printf("Soma dos pares de 1 a 100 = %d\n\n", sompar);
}
