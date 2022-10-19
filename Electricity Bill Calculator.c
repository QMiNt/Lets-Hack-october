#include <stdio.h>
int main(){
   int units;
   float amt, unitcharg, total;
   printf(" Enter no of units consumed : ");
   scanf("%d", &units);
   if (units < 50)
   {
       amt = units * 3.50;
       unitcharg = 25;
   }
   else if (units <= 100)
   {
       amt = 130 + ((units - 50 ) * 4.25);
       unitcharg = 35;
   }
   else if (units <= 200)
   {
       amt = 130 + 162.50 + ((units - 100 ) * 5.26);
       unitcharg = 45;
   }
   else
   {
       amt = 130 + 162.50 + 526 + ((units - 200 ) * 7.75);
       unitcharg = 55;
   }
   total= amt+ unitcharg;
   printf("electricity bill = %.2f", total);
   return 0;
}