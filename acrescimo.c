#include <stdio.h>
int main (){


   float salario, acrescimo, novo;


   printf("entre com o valor do salario: ");
   scanf("%f", &salario);


   acrescimo = salario * 0.25;


   novo  = salario + acrescimo;


   printf("salario atual: %.2f\n", salario);
   printf("novo salario: %.2f", novo);




   return 0;
}
