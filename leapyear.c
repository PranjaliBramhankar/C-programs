#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    int days=366;
    printf("Enter Any year \n");
    scanf("%d",&year);

    if(days<=366)
    {
        printf("%d is a leap year",year);
    }

    else
    {
        printf("%d is not leap year",year);
    }

    return 0;
     
}