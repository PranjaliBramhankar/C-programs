#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b,c,x;
    printf("Enter the values of\n a , b and c:-\n ");
    scanf("%d%d%d", &a,&b,&c);
    x=(b*b)-4*a*c;

    if(x>0)
    {
        printf("Distinct real root");
    }
    else if (x==0)
    {
        printf("Equal real root");
    }
    else
    {
        printf("No real root");
    }
}