#include <stdio.h>
#include <stdlib.h>

int main() {
    float n[8];
    float maior, menor;
    int indiceMaior, indiceMenor;
    int i;

    for (i = 0; i <= 7; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &n[i]);

    }

    maior = n[0];
    menor = n[0];
    indiceMaior = 0;
    indiceMenor = 0;

    for (i = 0; i<= 7; i++) {
        if (n[i] > maior) {
            maior = n[i];
            indiceMaior = i;
        }

        if (n[i] < menor) {
            menor = n[i];
            indiceMenor = i;
        }
    }
        

    printf("O maior numero digitado foi: %.2f indice: %d \n", maior, indiceMaior);
    printf("O menor numero digitado foi: %.2f indice: %d \n", menor, indiceMenor);

    return 0;
}