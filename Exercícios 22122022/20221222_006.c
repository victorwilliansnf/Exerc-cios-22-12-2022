//
// Created by victo on 02/01/2023.
//
#include <stdio.h>

int main() {
    int n, soma, divisor;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    soma = 0;

    for (divisor = 1; divisor < n; divisor++){
        if (n % divisor == 0)
            soma = soma + divisor;
    }

    if (n == soma)
        printf("O numero %d eh perfeito\n", n);
    else
        printf("O numero %d nao eh perfeito\n", n);

    return 0;
}