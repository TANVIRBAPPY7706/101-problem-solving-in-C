#include<stdio.h>
#include<conio.h>
main(){
int a,b;
printf("Enter 1st Number:\n");
scanf("%d",&a);
printf("Enter 2nd Number:\n");
scanf("%d",&b);

if(a>b){
    printf(" 1st is greater than 2nd" );

}
else if(b>a){
    printf(" 2nd is greater than 1st ");

}
else{
    printf("Both are equal\n");
}
getch();
}
