//
// Created by victo on 02/01/2023.
//
#include<stdio.h>
int main()
{
    int numeros,maior,menor;
    int i;

    printf("Digite o 1* numero: ");
    scanf("%i", &numeros);

    maior =numeros;
    menor =numeros;

    for(i=1; i<15; i++)
    {
        printf("\nDigite o %d* numero: ",i+1);
        scanf("%i", &numeros);

        if(numeros>maior)
            maior=numeros;
        else
        if(numeros<menor)
            menor=numeros;
    }


    printf("\nO menor numero: %d", menor);
    printf("\nO maior numero: %d", maior);

}