#include<stdio.h>
#include<conio.h>
void main()
{
    int n;

    printf("Enter value of n number");
    scanf("%d",&n);
         
    printf(" first N natural numbers  in reverse are \n");

    while(n>=1)
    {
        
        printf("%d\n",n);
        n--;

    }
}