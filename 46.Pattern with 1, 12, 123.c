/*
1
12
123
1234
12345*/
#include<stdio.h>
#include<conio.h>
main()
{

int i,j,n;

printf("Enter a number:\n");
scanf("%d",&n);

for(i=0;i<=n;i++){

    for(j=1;j<=i;j++)
        {

        printf("%d",j);

    }

        printf("1\n");


}
    getch();

}
