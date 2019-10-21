#include<stdio.h>
#include<conio.h>
void main()
{

    int i,j,k,n;

    printf("Enter Number:\n");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--){
        for(j=1;j<=i;j++)

            printf("%c",65+j);
            for(k=1;k<(n-i);k++)
                printf("");
                for(j=i;j>=0;j--)
                printf("%c",65+j);


        printf("\n");
    }
    getch();
}
