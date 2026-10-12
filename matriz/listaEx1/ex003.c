#include <stdio.h>
#include <stdlib.h>

int mat [2] [2];
int l, c, maior, linha, coluna;

main() {
    for (l=0; l<2; l++) {
        for (c=0; c<2; c++) {
            printf("Entre com os elementos da matriz[%i] [%i]: ", l, c);
            scanf("%i", &mat[l] [c]);
        }
    }

    maior = mat[0] [0];
    linha = 0;
    coluna = 0;

    for (l=0; l<2; l++) {
        for (c=0; c<2; c++) {
            if (mat[l] [c] > maior) {
                maior = mat[l] [c];
                linha = l;
                coluna = c;
            }
        }
    }

    printf("\n");
    printf("O maior elemento: %i \n", maior);
    printf("Se localiza na matriz: [%i] [%i]", linha, coluna);

    return 0;
}