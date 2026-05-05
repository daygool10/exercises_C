#include <stdio.h>

int main() {

float vetor[20];
float media = 0;

//preenchimento do vetor
for(int i = 0; i < 20; i++){
    printf("Digite um valor: ");
    scanf("%f", &vetor[i]);
}


float maior = vetor[0];
float menor = vetor[0];

//calculo da media
for(int i = 0; i < 20; i++){
    media = media + vetor[i];
}

printf("media dos valores: %.2f\n", media/20);

//encontrar maior e menor
for(int i = 0; i < 20; i++){
    if(vetor[i] > maior){
        maior = vetor[i];
    }

    if(vetor[i] < menor){
        menor = vetor[i];
    }
}

printf("\nMaior: %.2f\n", maior);
printf("Menor: %.2f", menor);


}
