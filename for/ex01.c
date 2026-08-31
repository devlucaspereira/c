#include <stdio.h>
#include <stdlib.h>

/*
Escrever um programa que conte até 300 
*/

int num, i;
int contp = 0;
int main(){
    printf("Quer contar ate qual numero? ");
    scanf("%i", &num);

    for (i=0; i<=num; i++) {
        printf("%i \n", i);
        if (i % 2 == 0) {
            contp = contp + 1;
        }
    }

    printf("Quantidade de numeros pares informados: %d", contp);

    return 0;
}