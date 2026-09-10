#include <stdio.h>
#include <stdlib.h>


int main() {

    int v[10];
    int contadores[5] = {0, 0, 0, 0, 0};
    int i;

    printf("Digite 10 numeros entre 1 e 5:\n");

    for (i = 0; i < 10; i++) {

        scanf("%d", &v[i]);

        contadores[v[i] - 1]++;
    }

    for (i = 0; i < 5; i++) {
        printf("Numero %d apareceu %d vezes\n", i + 1, contadores[i]);
    }

    return 0;
}