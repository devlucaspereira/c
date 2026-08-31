#include <stdio.h>
#include <stdlib.h>

int main() {
  float n[6];
    float media;
    float soma = 0;
    int i;

    for (i = 0; i <= 5; i++) {
        printf("Digite o %d numero: ", i + 1); 
        scanf("%f", &n[i]);
        soma += n[i];
    }


    media = soma / 6;

    printf("A soma dos 6 numeros é: %.2f \n", soma);
    printf("A media dos 6 numeros é: %.2f", media);

    return 0;
}