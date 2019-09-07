#include<stdio.h>
#include<conio.h>
void main()
{
    int roll,m1,m2,m3,total;
    float avg;
    printf("Enter Roll No:\n");
    scanf("%d",&roll);
        printf("Enter Marks 1:\n");
    scanf("%d",&m1);
        printf("Enter Marks 2:\n");
    scanf("%d",&m2);
        printf("Enter Marks 3:\n");
    scanf("%d",&m3);
    total=m1+m2+m3;
    avg=(m1+m2+m3)/3;

printf("Your Calculation for roll no:%d",roll);
printf("\nThe total number is: %d\n",total);
if(avg>=80){
    printf("\nGrade:\t A+");

}
else if((avg>=70)&&(avg<80)){
     printf("\nGrade:\t A");
}

else if((avg>=60)&&(avg<70)){
     printf("\nGrade:\t A-");
}
else if((avg>=50)&&(avg<60)){
     printf("\nGrade:\t B");
}
else if((avg>=40)&&(avg<50)){
     printf("\nGrade:\t C");
}
else{
    printf("\nThe student is Failed");

}
printf("\n\t\t\t\t\tSolved By Tanvir Hossen Bappy...");
getch();
}

