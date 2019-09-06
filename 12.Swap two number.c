#include<stdio.h>
#include<conio.h>
main(){
int a,b,container;
printf("Enter Numbers:\n");
scanf("%d%d",&a,&b);
printf("\n Before swapping \n%d=a,\n%d=b",a,b);
container=a;
a=b;
b=container;
printf("\nAfter Swapping \n a=%d, \n b=%d ",a,b);
getch();


}
