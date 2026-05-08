#include <stdio.h>

float media(float a, float b){

    float m;
    m = (a + b)/2;
    return m;

}

void calcular(float a, float b){

    float soma;
    soma = a + b;
    printf("Soma: %.1f", soma);

}

int main() {

    float a, b, resultado;

    printf("Digite a e b: ");
    scanf("%f %f", &a, &b);

    resultado = media(a, b);

    printf("media: %.1f\n", resultado);
    calcular(a, b);


return 0;
}
