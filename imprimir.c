#include <stdio.h>

int main(){

int v[10];

for(int i = 0; i < 10; i++){
    printf("digite um numero: ");
    scanf("%d", &v[i]);
}

printf("valores digitados: \n");
for(int i = 0; i < 10; i++){
    printf("%d ", v[i]);
}



}
