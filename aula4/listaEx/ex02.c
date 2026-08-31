#include <stdio.h>
#include <stdlib.h>

/*
Escrever um algoritmo que leia dois números e escreva o maior deles.
*/ 

int num;
int maiorN = 0;

int main() {
    int i;
    for (i = 0; i < 2; i++) {
        printf("Digite um numero: ");
        scanf("%i", &num);

        if (num > maiorN) {
            maiorN = num;
        }
    }
    printf("O maior numero digitado foi: %i", maiorN);

    return 0;
}