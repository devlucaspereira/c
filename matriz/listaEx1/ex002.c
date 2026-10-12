#include <stdio.h>
#include <stdlib.h>

int mat [2] [4];
int l, c, somaP;

main() {
    for (l=0; l<2; l++) {
        for (c=0; c<4; c++) {
            printf("Entre com os elementos da matriz[%i] [%i]: ", l, c);
            scanf("%i", &mat[l] [c]);
            if (mat[l] [c] % 2 == 0) {
                somaP++;
            }
        }
    }

    printf("\n");
    printf("Foram encontrados um total de %i elementos pares na matriz", somaP);

    return 0;
}