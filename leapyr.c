#include<conio.h>
#include<stdio.h>
void main()
{
    int year;
    printf("Enter Any Year:-");
    scanf("%d",&year);

    if(year%4)
    {
        printf("Not a leap year");
    }
    else if(year%100)
    {
        printf("It is a leap year");
    }
    else if (year%400)
    {
        printf("Not a  leap year");
    }
    else
    {
        printf("Leap Year");

    }

}