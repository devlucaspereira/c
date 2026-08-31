#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número inteiro N e calcule a soma de todos os números inteiros de 1 até N.
*/ 

int num; 
int somaN;
int main() {
    int i;
    printf("Digite um numero: ");
    scanf("%i", &num);

    for (i = 1; i <= num; i++) {
        somaN += i;
    }

    printf("%i", somaN);

    return 0;
}