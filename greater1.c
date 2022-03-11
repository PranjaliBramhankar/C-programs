#include<conio.h>
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    
    if(a>b)
    {
        printf("%d is greater",a);
    }
    else
    {
        printf("%d is greater",b);
    }
    return 0;

}