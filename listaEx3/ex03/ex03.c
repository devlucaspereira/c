#include <stdio.h>
#include <stdlib.h>

int main() {

    float v[10];
    float soma = 0;
    float media;
    int quantidade = 0;
    int i;

    printf("Digite 10 numeros:\n");

    for (i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        soma = soma + v[i];
    }

    media = soma / 10;

    for (i = 0; i < 10; i++) {

        if (v[i] > media) {
            quantidade++;
        }
    }

    printf("Media: %.2f\n", media);
    printf("Quantidade acima da media: %d\n", quantidade);

    return 0;
}