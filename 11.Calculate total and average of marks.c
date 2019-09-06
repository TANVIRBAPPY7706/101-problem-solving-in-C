#include<stdio.h>
#include<conio.h>
main(){
int roll, m1,m2,m3, total;
float average;

printf("Enter Roll Number:\n");
scanf("%d",&roll);
printf("Enter Marks 1:\n");
scanf("%d",&m1);
printf("Enter Marks 2:\n");
scanf("%d",&m2);
printf("Enter Marks 3:\n");
scanf("%d",&m3);
total=m1+m2+m3;
average= total/3;
printf("\n Student Roll Number is:%d",roll);
printf("\n Marks 1 is:%d",m1);
printf("\n Marks 2 is:%d",m2);
printf("\n Marks 3 is:%d",m3);
printf("\n The student get total %d ",total);
printf("\n Average number %f",average);
getch();




}
