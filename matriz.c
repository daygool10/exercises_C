#include <stdio.h>

int main(){

int matriz[4][4], i, j;


//preenchimento da matriz
for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        printf("entre com os valores: ");
        scanf("%d", &matriz[i][j]);
    }
}

for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
         printf("%d ", matriz[i][j]);
    }
    printf("\n");
}






}
