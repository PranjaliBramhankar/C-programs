#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1;
    printf("First 10 odd numbers are\n");

    while(a<21)
    {
        if(a%2!=0)
        {
            printf("\n%d",a);
        }
        
        a++;
    }
    
     
}