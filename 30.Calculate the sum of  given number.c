#include<stdio.h>
main(){
int rem, sum=0, n;

printf("Enter your number to calculate the sum:\n");
scanf("%d",&n);

while(n>0){
     rem=n%10;
  sum= sum+rem;
  n=n/10;

}
  printf("The sum of numbers is:\n %d",sum);
  getch();


}
