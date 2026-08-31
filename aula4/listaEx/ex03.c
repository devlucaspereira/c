#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número e determine se ele é positivo, negativo ou zero
*/ 

int num;
int main() {
    printf("Digite um numero: ");
    scanf("%i", &num);

    if (num > 0) {
        printf("O numero %d é positivo", num);
    } else if(num < 0) {
        printf("O numero %d é negativo", num);
    } else {
        printf("O numero %d é nulo", num);
    }
    return 0;
}