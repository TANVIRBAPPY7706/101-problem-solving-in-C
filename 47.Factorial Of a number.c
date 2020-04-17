#include <stdio.h>

int main()
{
  int i,fact=1, n;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    fact = fact * i;

  printf("Factorial is %d = %d\n", n, fact);
   printf("\n\n\n\n\n \t\t\t\t\t\t Solved By Tanvir Hossen Bappy,DIU");

  return 0;
}
