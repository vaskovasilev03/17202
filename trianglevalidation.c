#include <stdio.h>

int main()
{
   int a, b, c, P;
   printf("a = ");
   scanf("%d", &a);
   printf("b = ");
   scanf("%d", &b);
   printf("c = ");
   scanf("%d", &c);
   int notValid = a <= 0 || 
   b <= 0 || c <= 0 || (a + c) <=
   b || (a + b) <= c || (b + c) <= a;
   if (notValid)
   {
      printf("Invalid triangle\n");
      return 1;
   }
   P = a + b + c;
   printf("P = %d\n", P);
   return 0;
}