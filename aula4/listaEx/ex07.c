#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número inteiro e imprima sua tabuada de 1 a 10.
*/ 

int num, i; 
int main() {
    printf("Digite um numero: ");
    scanf("%i", &num);

    for (i = 1; i <= 10; i++){
        printf("%d x %d = %d: \n\n", num, i, num * i);
    }

    return 0;
}