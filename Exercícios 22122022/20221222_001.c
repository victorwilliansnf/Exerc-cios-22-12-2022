//
// Created by victo on 02/01/2023.
//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int I;

float Y = 2;

int main(){
    for (I=1; I<=10; I++){
        Y = Y - (Y- cos(Y))/(1+ sin(Y));
        printf("Valor de X%d = %f\n", I, Y);
    }
    printf("O valor da raiz: %f\n", Y);
}