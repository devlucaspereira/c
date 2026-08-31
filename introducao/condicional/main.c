#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 35) {
        printf("O numero e maior que 35.");
    } 
    else if (numero < 35) {
        printf("O numero e menor que 35.");
    } 
    else {
        printf("O numero e igual a 35.");
    }

    return 0;
}