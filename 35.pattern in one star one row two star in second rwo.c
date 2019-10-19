#include<stdio.h>
#include<conio.h>
main(){
int row, coll,num;
printf("Enter Number to evaluate:\n");
scanf("%d",&num);
for(row=1; row<=num; row++){

    for(coll=1; coll<=row; coll++){

        printf("*");
    }
    printf("\n");
}
getch();
}
