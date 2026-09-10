#include <stdio.h>
#include <stdlib.h>


int main() {

    float v[5];
    float k;
    int i;

    printf("Digite 5 numeros:\n");

    for (i = 0; i < 5; i++) {
        scanf("%f", &v[i]);
    }

    printf("Digite o valor do escalar k: ");
    scanf("%f", &k);

    for (i = 0; i < 5; i++) {
        v[i] = v[i] * k;
    }

    printf("Novo vetor:\n");

    for (i = 0; i < 5; i++) {
        printf("%.2f ", v[i]);
    }

    return 0;
}