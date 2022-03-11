#include<stdio.h>
#include<conio.h>
void main()
{
    int A,p,r,t;

    printf("Enter initial principal balance\n");

    scanf("%d", &p);

    printf("Enter Rate of Interest\n");

    scanf("%d", &r);
    
    printf("Enter time (in years)\n");

    scanf("%d", &t);

    A= p*r*t/100;

    printf("Simple intrest is %d",A);  
    

}
