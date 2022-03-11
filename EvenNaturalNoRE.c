#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter value of n number");
    scanf("%d",&a);
    printf("First N Even numbers in Reserves are\n");

    while(a>=1)
    {
        if(a%2==0)
        {
            
            printf("\n%d",a);
            
        }
        a--;
        
    }
    
     
}