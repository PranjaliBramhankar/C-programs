#include<conio.h>
#include<stdio.h>
void main()
{
    int first_glass;
    int second_glass;

    printf("Enter the first number");
    scanf("%d",&first_glass);
    printf("\nEnter the second number");
    scanf("%d", &second_glass);

    second_glass= first_glass+second_glass;

    first_glass=second_glass-first_glass;

    second_glass= second_glass-first_glass;

    printf("\nAfter Swapping first number %d" ,first_glass );
    printf("\nAfter Swapping second number %d",second_glass );

}