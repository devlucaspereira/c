#include <stdio.h>
#include <stdlib.h>

int mat[3] [3];
int l, c, soma;

main() {
    for (l=0; l<3; l++) {
        for (c=0; c<3; c++) {
            printf("Entre com os elementos da matriz[%i] [%i]", l, c);
            scanf("%i", &mat[l] [c]);
            soma += mat[l] [c];
        }
    }

    printf("\n A soma dos elementos da matriz: %i", soma);
    return 0;
}