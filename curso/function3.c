#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostrarTabuada(int n1) {

    int i;
    for (i=1; i <=10; i++){
        printf("%d x %d = %d \n", n1, i, n1 * i);
    }

}



int main(){

setlocale(LC_ALL, "portuguese");


        int numero;

        printf("Digite um numero numero: ");
        scanf("%d", &numero);



        mostrarTabuada(numero);


       

    return 0;
}