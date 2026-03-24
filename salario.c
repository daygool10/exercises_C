#include <stdio.h>
int main (){

   float valorHora, horaExtra, salario, totalHoras, semana = 40;

   printf("entre com o valor da hora: ");
   scanf("%f", &valorHora);
   printf("entre com a quantidade de horas trabalhadas no mes: ");
   scanf("%f", &totalHoras);


   float mes = 4 * semana;

   if (totalHoras > mes) {
       horaExtra = totalHoras - mes;
       salario = mes * valorHora + horaExtra * 1.5 * valorHora;
   } else {
       salario = valorHora * totalHoras;
   }

   printf("salario: %.2f", salario);

   return 0;
}

