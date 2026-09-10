#include <stdio.h>
#include <stdlib.h>


int main() {

    int v[6];
    int i;
    int temp;

    printf("Digite 6 numeros inteiros:\n");

    for (i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 3; i++) {
        temp = v[i];
        v[i] = v[5 - i];
        v[5 - i] = temp;
    }

    printf("Vetor invertido:\n");

    for (i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}