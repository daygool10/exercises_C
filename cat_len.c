#include <stdio.h>
#include <string.h>

int main(){

char nome[30], sobrenome[15], endereco[50], email[50];

printf("Entre com o seu nome: ");
fgets(nome, 30, stdin);

printf("Entre com o seu sobrenome: ");
fgets(sobrenome, 25, stdin);

printf("Entre com o endereco: ");
fgets(endereco, 50, stdin);

printf("Entre com o email: ");
fgets(email, 50, stdin);

printf("\nNome: %s", nome);
printf("\nTamanho do nome: %lu", strlen(nome));
printf("\nNome e sobrenome: %s", strcat(nome, sobrenome));

printf("\nEndereco: %s", endereco);
printf("\nEmail: %s", email);

return 0;

}
