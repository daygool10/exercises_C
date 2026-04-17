#include <stdio.h>

int main(){

int v[20], pares = 0, impares = 0;

for(int i = 0; i < 20; i++){
    printf("entre com o %d numero: ", i + 1);
    scanf("%d", &v[i]);

    if(v[i] % 2 == 0){
        pares++;
    }else {
        impares ++;
    }
}

printf("pares : %d\n impares: %d\n", pares, impares);

}
