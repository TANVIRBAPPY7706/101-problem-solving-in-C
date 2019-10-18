#include<stdio.h>
#include<conio.h>
main(){

int age;
char Marital_status,Gender;
printf("Enter Marital Status,Gender,Age: (e.g. m,f,25):\n");
scanf("%c %c %d",&Marital_status,&Gender,&age);
if(Marital_status=='m'){

    printf("You cannot marry\n");
}
    else if(Marital_status =='u'){
            if(Gender=='m'){
                if(age>=21)
                    printf("You Can Marry\n");
                else

                    printf("You Can Not Marry Now\n");


    }
            else if(Gender=='f'){

                if(age>=18)
                   printf("You Can Marry\n");
                    else

                    printf("You Can Not Marry Now\n");
            }
            else
                printf("Invalid Gender Input\n");

        }


else{
    printf("Invalid input marital status\n");
}
printf("\n\t\t\t\t\tSolved By Tanvir Hossen Bappy...");
getch();
}
