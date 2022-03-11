#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    int y;
    int swap;
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("enter second number\n");
    scanf("%d",&y);

    swap=x;
    x=y;
    y=swap;

    printf("After Swapping first number %d" ,x );
    printf("\nAfter Swapping second number %d",y );

}