#include <stdio.h>
#include <stdlib.h>


int main() {

    float A[4];
    float B[4];
    float resultado = 0;
    int i;

    printf("Digite os 4 valores do vetor A:\n");

    for (i = 0; i < 4; i++) {
        scanf("%f", &A[i]);
    }

    printf("Digite os 4 valores do vetor B:\n");

    for (i = 0; i < 4; i++) {
        scanf("%f", &B[i]);
    }

    for (i = 0; i < 4; i++) {
        resultado = resultado + A[i] * B[i];
    }

    printf("Produto escalar: %.2f\n", resultado);

    return 0;
}