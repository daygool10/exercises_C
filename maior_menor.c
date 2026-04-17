#include <stdio.h>

int main(){

int v[15], maior, menor;

for(int i = 0; i < 15; i++){
    printf("entre com o %d numero: ", i+1);
    scanf("%d", &v[i]);

    if(i == 0){
        maior = menor = v[i];
    }else{
        if(v[i] > maior)maior = v[i];
        if(v[i] < menor)menor = v[i];

    }


}

printf("maior: %d\n", maior);
printf("menor: %d\n", menor);




}
