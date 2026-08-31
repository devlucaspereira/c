#include <stdio.h>
#include <stdlib.h>

/*
Escrever um programa que conte até 300 
*/

int ini , fim,  i, s;
int main(){
    printf("Quer contar ate: ");
    scanf("%i", &fim);

    printf("Comecando de qual numero? ");
    scanf("%i", &ini);

    printf("Escolha o salto: ");
    scanf("%i", &s);

    if(ini < fim) {
        for(i = ini; i <= fim; i = i+s) {
        printf("%d \n", i);
        }
    }

    if(ini > fim) {
        for(i = ini; i >= fim; i = i-s) {
        printf("%d \n", i);
        }
    }

    return 0;
}