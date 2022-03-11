#include<stdio.h>
#include<conio.h>
void main()
{
    int a=21;
    printf("First 10 Even numbers are\n");

    while(a>=2)
    {
        if(a%2!=0)
        {
            printf("\n%d",a);
        }
        
        a--;
    }
    
     
}