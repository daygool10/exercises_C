#include <stdio.h>
int main (){


   float volume, comprimento, largura, altura;


   printf("entre com o valor do comprimento: ");
   scanf("%f", &comprimento);
   printf("entre com o valor do largura: ");
   scanf("%f", &largura);
   printf("entre com o valor do altura: ");
   scanf("%f", &altura);


   volume = comprimento * largura * altura;


   printf("O volume da caixa e: %.2f\n", volume);




   return 0;
}
