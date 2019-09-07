#include<stdio.h>
#include<conio.h>
int main(){
int num;
printf("Enter a number:\n");
scanf("%d",&num);
if(num%5==0){
    printf("The given number is deviseable by 5 \n");

}
else{
    printf("Sorry!!The given number is not deviseable by 5 \n");
}
getch();
}
