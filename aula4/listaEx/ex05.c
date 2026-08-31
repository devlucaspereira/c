#include <stdio.h>
#include <stdlib.h>

/*
Escrever um algoritmo que leia 3 números inteiros e escreva-os em ordem crescente.
*/ 

int a, b, c, temp;
int main() {
    printf("Digite o primeiro numero: ");
    scanf("%i", &a);

    printf("Digite o segundo numero: ");
    scanf("%i", &b);

        printf("Digite o terceiro numero: ");
    scanf("%i", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c; 
        c = temp;
    }

    printf("Ordem crescente: %d %d %d\n", a, b, c);
    
    return 0;
}