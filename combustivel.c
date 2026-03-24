#include <stdio.h>
int main (){

    float litros, precoAlcool, precoGasolina, valorPagar;
    char combustivel;
    int x=0, quantidade;

    printf("quantos abastecimentos gostaria de realizar?\n ");
    scanf("%i", &quantidade);

    while(x < quantidade){
    printf("Abastecer Alcool(A) ou Gasolina(G): ");
    scanf(" %c", &combustivel);
    printf("Quantos litros abastecer?: ");
    scanf("%f", &litros);

    if(combustivel == 'A'){
        printf("Entre com o valor do Alcool: ");
        scanf("%f", &precoAlcool);
        if(litros <= 20){
            valorPagar = ((precoAlcool*litros)*0.97);
        }
        else if(litros > 20){
            valorPagar = ((precoAlcool*litros)*0.95);
        }
        printf("Valor a pagar: %.2f\n", valorPagar);
    }
    else if (combustivel == 'G'){
        printf("Entre com o valor do Gasolina: ");
        scanf("%f", &precoGasolina);
         if(litros <= 20){
            valorPagar = ((precoGasolina*litros)*0.94);
        }
        else if(litros > 20){
            valorPagar = ((precoGasolina*litros)*0.96);
        }
        printf("\nValor a pagar: %.2f\n", valorPagar);
    }
    else {
        printf("Entrada invalida!");
    }
   x++;
}


return 0;
}
