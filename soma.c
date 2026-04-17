#include <stdio.h>

int main(){

int num[8];
int soma = 0;

for(int i = 0; i < 8; i++){
    printf("entre com os numeros a serem somados: ");
    scanf("%d", &num[i]);
    soma += num[i];
}

printf("soma: %d\n", soma);









}
