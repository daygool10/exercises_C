#include <stdio.h>

int main(){

   int num;

   printf("digite qual tabuada voce quer calcular: ");
   scanf("%i", &num);
   printf("Tabuada do numero %i:\n", num);

   for(int i = 0; i <= 10; i++){
        printf("%i X %i = %i\n", num, i, num*i);
   }


return 0;
}
