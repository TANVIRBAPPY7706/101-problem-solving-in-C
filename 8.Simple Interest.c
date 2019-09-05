//The formula oof simple interest is (p*n*r)/100
#include<stdio.h>
#include<conio.h>
main()
{
    float simple_interest,p,n,r;
    printf("Enter value of P:\n");
    scanf("%f",&p);
      printf("Enter value of N:\n");
    scanf("%f",&n);
      printf("Enter value of R:\n");
    scanf("%f",&r);
    simple_interest=(p*n*r)/100;
    printf("The result of simple interest is:%6.2f",simple_interest);
    getch();


}
