#include "stdio.h"
#include "locale.h"

double funcF(unsigned a);
int main(void)
{
   setlocale(LC_CTYPE, "ukr");
 unsigned x;
 double result;
 printf("Ввести x: ");
 scanf("%d", &x);

 result = funcF(x);
 printf("\nf(x)= %.3lf", result);
 return 0;
}

double funcF(unsigned a)
{
 if (a == 7){
  return 5;
    }
 else if (a > 7){
     return funcF(a-1)+9;
  } else return 0;
}
