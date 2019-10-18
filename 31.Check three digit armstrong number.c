#include<stdio.h>
#include<conio.h>
main()
{
    int temp, rem, sum=0, n;
    printf("Enter numbers to check:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0){

        rem=n%10;
        sum=sum+rem*rem*rem;
      n=n/10;

    }
    if(temp==sum){

        printf("Wo!!!! Its an Armstrong Number:\n");

    }else
    printf("Sorry ,Not an Armstrong Number")   ;
    getch();
}
