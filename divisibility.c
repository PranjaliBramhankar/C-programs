#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter Any Number \n");
    scanf("%d",&num);

    if(num%5==0)
    {
        printf("%d is a completely divisible",num);
    }

    else
    {
        printf("%d is not divisible",num);
    }

    return 0;
     
}