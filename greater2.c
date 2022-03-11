#include<conio.h>
#include<stdio.h>
int main()
{
    int a;
    printf("Enter first numbers \n");
    scanf("%d",&a);
    int b;
    printf("Enter second numbers \n");
    scanf("%d",&b);
    int c;
    printf("Enter third numbers \n");
    scanf("%d",&c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf(" first number %d is greater ",a);
        }
        else
        {
            printf("Thrid number %d is greater ",c);
    
        }

    }
    if(b>c)
    {
        printf("second number %d is greater ",b);
    }
    else
    {
        printf("Thrid number %d is greater ",c);
    }
    return 0;

}