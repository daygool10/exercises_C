#include <stdio.h>
int main (){


   int a = 0;
   int b = 1;
   int proximo;


   for (int i = 0; i <= 20; i++) {
       proximo = a + b;
       a = b;
       b = proximo;
       printf("%i\n", a);
   }

   return 0;
}
