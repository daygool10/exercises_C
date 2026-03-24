#include <stdio.h>

int main (){

    int n, a, b, c;
    int troca;

    printf("digite os valores 1, 2 ou 3\n");
    printf("entre com o valor de n: ");
    scanf("%d", &n);
    printf("entre com o valor de a: ");
    scanf("%d", &a);
    printf("entre com o valor de b: ");
    scanf("%d", &b);
    printf("entre com o valor de c: ");
    scanf("%d", &c);

    if(n == 1){
        if(a > b){
            troca = a;
            a = b;
            b = troca;
        }
        if(a > c){
            troca = a;
            a = c;
            c = troca;
        }
        if(b > c){
            troca = b;
            b = c;
            c = troca;
        }
    }

    if(n == 2){
        if(a < b){
            troca = a;
            a = b;
            b = troca;
        }
        if(a < c){
            troca = a;
            a = c;
            c = troca;
        }
        if(b < c){
            troca = b;
            b = c;
            c = troca;
        }
    }
    if(n == 3){
        if(a > b && a > c){
            troca = a;
            a = b;
            b = troca;
        }
        if(c > b &&  c > a){
            troca = c;
            c = b;
            b = troca;
        }
    }

    printf("%d, %d, %d", a, b, c);

return 0;
}

