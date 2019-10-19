#include<stdio.h>
#include<conio.h>
main()
{
    int i, newn, n, sum=0;
    printf("Enter Number:\n");
    scanf("%d",&n);
    printf("Numbers Entered to add:\n");
    for(i=1; i<=n;i++){
        scanf("%d",&newn);
        sum=sum+newn;


    }
      printf("Answer is %d:\n",sum);
    getch();
}
