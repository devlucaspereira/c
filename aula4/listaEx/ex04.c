#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia a idade de uma pessoa e classifique-a da seguinte forma:
Criança: 0 a 12 anos
Adolescente: 13 a 17 anos
Adulto: 18 anos ou mais
*/ 

int num;
int main() {
    printf("Digite sua idade: ");
    scanf("%i", &num);
    if (num > 0 && num <= 12) {
        printf("voce tem %d anos!\n"), num; 
        printf("voce é crianca!");
    } else if(num > 12 && num <= 17) {
        printf("voce tem %d anos!\n", num); 
        printf("voce é adolescente!");
    }else{
        printf("voce tem %d anos!\n", num); 
        printf("voce é adulto!");
    }
    return 0;
}