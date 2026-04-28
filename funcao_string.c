#include <stdio.h>
#include <string.h>

int main(){

char nome[30], endereco[50], email[50];

printf("Entre com o seu nome: ");
fgets(nome, 30, stdin);

printf("Entre com o endereco: ");
fgets(endereco, 50, stdin);

printf("Entre com o email: ");
fgets(email, 50, stdin);

printf("\nNome: %s", nome);
printf("\nEndereco: %s", endereco);
printf("\nEmail: %s", email);





return 0;

}
