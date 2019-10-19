#include<stdio.h>
main()
{
    int i,n;
    printf("Enter Number:\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++){

        printf("\t%d*%d=%d\n",n,i,n*i);
    }
    getch();
}
