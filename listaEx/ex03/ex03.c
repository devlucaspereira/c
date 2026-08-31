#include <stdio.h>
#include <stdlib.h>

int main() {
    float n[8];
    float maior = 0;
    float menor;
    int indiceM;
    int indice;
    int i;

    for (i = 0; i <= 7; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &n[i]);

        if (n[i] > maior) {
            maior = n[i];
            indiceM = i;
        }

        if (n[i] < menor) {
            menor = n[i];
            indice = i;
        }
    }

    printf("O maior numero digitado foi: %f \n", maior);
    printf("O menor numero digitado foi: %f \n", menor);

    return 0;
}