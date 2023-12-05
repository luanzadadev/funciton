#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostrarNome(char nome[200]){

printf("Nome: %s\n", nome);




}

void mostrarIdade(int idade){
    

printf("Idade: %d \n", idade);


}
void limpatela(){

fflush(stdin);
system("cls || clear");

}
void cabecalho()
{

    printf("\n================================\n");
    printf("\tSENAI \n");
    printf("\n================================\n");
}

int main()

{
    setlocale(LC_ALL, "portuguese");

    char nome[200];
    int idade;

    cabecalho();
    printf("Digite um nome: ");
    gets(nome);
    limpatela();

    cabecalho();
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    limpatela();


    cabecalho();
 

    mostrarNome(nome);
    mostrarIdade(idade);
    


    return 0;
}