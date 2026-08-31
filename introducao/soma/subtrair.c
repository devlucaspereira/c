#include <stdio.h>

int main() {
    int numero1, numero2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = numero1 - numero2;

    printf("A subtracao dos numeros e: %d", resultado);

    return 0;
}