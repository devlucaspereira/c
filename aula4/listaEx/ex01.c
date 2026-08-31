#include <stdio.h>
#include <stdlib.h>

/*
Desenvolver um algoritmo que leia um valor numérico inteiro e informe se ele é maior que o número 15
*/ 

int num;
int main() {
    printf("Digite um numero: ");
    scanf("%i", &num);

    if (num > 15) {
        printf("O numero %d e maior que 15", num);
    } else {
        printf("O numero %d e menor que 15", num);
    }
    return 0;
}