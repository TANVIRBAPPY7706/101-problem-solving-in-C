// We know the quadeatic equation is root of b^2-4ac.
#include<stdio.h>
#include<conio.h>
void main(){
float x,r1,r2,a,b,c;
printf("Enter value of a,b,c:\n");
scanf("\n%d\n%d\n%d",&a,&b,&c);
x=b*b-4*a*c;
r1=(-b+c)/2*a;
r2=(-b-c)/2*a;

if(x>0)
    printf("\n Roots are unequal");

else if(x<0)
    printf("\n Roots are imaginary");


else
    printf("\n Roots are same " );


printf("\n R1=%f",r1);

printf("\n R2=%f",r2);

getch();
}

//----------------------------------------------------------------------------
/*

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);
    discriminant = b*b-4*a*c;
    // condition for real and different roots
    if (discriminant > 0)
    {
    // sqrt() function returns square root
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",root1 , root2);
    }
    //condition for real and equal roots
    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    // if roots are not real
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    return 0;
}
*/
