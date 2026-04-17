#include <stdio.h>
int main(){


float vetor[5];

for(int i = 0; i < 5; i++){
    printf("digite os numeros: ");
    scanf("%f", &vetor[i]);
}

printf("Reverso: \n");
for(int i = 4; i >=0; i--){
    printf("%.0f ", vetor[i]);
}
}
