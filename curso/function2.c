#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float somar(float n1, float n2){

    float resultado = n1 + n2;
    float media = resultado / 2;

    return media;
}


int main(){

setlocale(LC_ALL, "portuguese");


        float primeiroNumero;
        float segundoNumero;
        float media;

        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiroNumero);


        printf("Digite o segundo numero: ");
        scanf("%f", &segundoNumero);

        media = somar(primeiroNumero, segundoNumero);


        printf("Primeiro numero: %f \n", primeiroNumero);
        printf("Segundo numero: %f \n", segundoNumero);
        printf("A media é: %f \n", media);




    return 0;
}