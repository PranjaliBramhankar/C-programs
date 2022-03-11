#include<conio.h>
#include<stdio.h>
void main()
{
    int a=1;
    int fact=1;
    int b; 
    printf("Enter Any Number");
    scanf("%d",&b);

   while(a<=b)
    {
        fact=fact*a;
         a++;
      
    }
     
    printf("\n The Factorial is %d",fact);
   
}