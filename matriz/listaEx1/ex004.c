#include <stdio.h>
#include <stdlib.h>

int mat[4][5];
int l, c, soma;

int main() {
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 5; c++) {
            printf("Entre com os elementos da matriz[%i][%i]: ", l, c);
            scanf("%i", &mat[l][c]);
        }
    }

    for (c = 0; c < 5; c++) {
        soma = 0;

        for (l = 0; l < 4; l++) {
            soma = soma + mat[l][c];
        }

        printf("\nSoma da coluna %i: %i\n", c, soma);
    }

    return 0;
}
