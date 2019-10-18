#include<stdio.h>
main()
{
    int rem,n;

    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n>0){

        rem=n%10;
        printf("The reverse serial is:\n");
        printf("%d",rem);
        n=n/10;

    }
printf("\n\t\t\t\t\tSolved By Tanvir Hossen Bappy...");
    getch();
}
