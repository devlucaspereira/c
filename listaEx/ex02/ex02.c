#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[10];
    int i;
    int par = 0;
    int impar = 0;

    for (i = 0; i <= 9; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("O total de numeros pares digitados foi: %d \n", par);
    printf("O total de numeros impares digitados foi: %d \n", impar);


    return 0;
}