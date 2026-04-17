#include <stdio.h>

int main() {
    float v[10], soma = 0, media;

    for(int i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / 10;

    printf("Media = %.1f\n", media);
    printf("Acima da media:\n");

    for(int i = 0; i < 10; i++) {
        if(v[i] > media) {
            printf("%.1f, ", v[i]);
        }
    }

    return 0;
}
