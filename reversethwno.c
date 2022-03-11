#include<conio.h>
#include<stdio.h>
void main()
{
    int a=1234;
    int digit=0;
    int reverse;

    while(a!=0)
    {
        digit= a%10;
        reverse =  reverse * 10 + digit;
        a= a/10;

    } 
    printf("%d\n",reverse);

}