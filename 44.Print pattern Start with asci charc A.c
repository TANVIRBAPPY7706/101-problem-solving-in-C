#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    printf("Enter Number:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(k=1;k<=(n-i);k++){
            printf("");

        }
        for(j=1;j<=i;j++){

            printf("%c",64+i);
        }
        for(j=2;j<=i;j++){

             printf("%c",64+i);
        }
        printf("\n");


    }
    getch();
}
