#include <stdio.h>

int main (){

  float num, saldo, debito, credito, saldoAtual;

  printf("entre com o numero da conta: ");
  scanf("%f", &num);
  printf("entre com o valor do saldo: ");
  scanf("%f", &saldo);
  printf("entre com o valor de debito: ");
  scanf("%f", &debito);
  printf("entre com o valor de credito: ");
  scanf("%f", &credito);

  saldoAtual = saldo -(debito + credito);

  if(saldoAtual > 0){
    printf("%.2f , Saldo positivo", saldoAtual);
  }
  else{
        printf("%.2f , Saldo negativo", saldoAtual);
  }

return 0;
}

