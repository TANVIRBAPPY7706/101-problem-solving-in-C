#include<stdio.h>
#include<conio.h>
main()
{

    int i,j,n;
    printf("Enter numbers:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        for(j=1;j<=n;j++){

            printf("*");

        }
        printf("\n");
    }
getch();

}
